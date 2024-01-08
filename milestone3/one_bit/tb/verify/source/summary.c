#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

// Struct để lưu trữ kết quả cho mỗi lệnh
typedef struct
{
    char instruction[50];
    int totalPassed;
    int totalTests;
} InstructionResult;

// Hàm để kiểm tra và trả về kết quả cho mỗi lệnh
void processInstructionResult(FILE *file, const char *instruction, InstructionResult *result)
{
    char line[MAX_LINE_LENGTH];
    int passedLines = 0;
    int totalLines = 0;

    // Đặt con trỏ đọc tới đầu file
    fseek(file, 0, SEEK_SET);

    while (fgets(line, sizeof(line), file))
    {
        // Kiểm tra xem tên lệnh có trùng khớp hay không
        if (strstr(line, instruction) != NULL && strstr(line, "PASSED"))
        {
            passedLines++;
        }
        if (strstr(line, instruction) != NULL)
        {
            totalLines++;
        }
    }

    printf("%s INSTRUCTION ----- Passed: %d, Total: %d\n", instruction, passedLines, totalLines);

    if (totalLines > 0)
    {
        double passPercentage = (double)passedLines / totalLines * 100;
        printf("Pass percentage: %.2lf%%\n", passPercentage);

        result->totalPassed += passedLines;
        result->totalTests += totalLines;
    }
    else
    {
        printf("No data for %s instruction.\n", instruction);
    }
}

int main()
{
    FILE *file = fopen("./verify/output/result.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Các lệnh bạn muốn kiểm tra
    const char *instructions[] = {
        "ADD INSTRUCTION", "SUB INSTRUCTION", "SLL INSTRUCTION", "SLT INSTRUCTION", "SLTU INSTRUCTION",
        "SRL INSTRUCTION", "SRA INSTRUCTION", "XOR INSTRUCTION", "OR INSTRUCTION", "AND INSTRUCTION",
        "SLLI INSTRUCTION", "SLTI INSTRUCTION", "SLTIU INSTRUCTION", "SRLI INSTRUCTION", "SRAI INSTRUCTION",
        "XORI INSTRUCTION", "ORI INSTRUCTION", "ANDI INSTRUCTION", "SW INSTRUCTION", "SH INSTRUCTION",
        "SB INSTRUCTION", "LW INSTRUCTION", "LH INSTRUCTION", "LHU INSTRUCTION", "LB INSTRUCTION",
        "LBU INSTRUCTION", "BRANCH INSTRUCTION", "JAL INSTRUCTION", "JALR INSTRUCTION"};

    // Mảng để lưu trữ kết quả của mỗi lệnh
    InstructionResult results[sizeof(instructions) / sizeof(instructions[0])];

    for (int i = 0; i < sizeof(instructions) / sizeof(instructions[0]); i++)
    {
        strcpy(results[i].instruction, instructions[i]);
        results[i].totalPassed = 0;
        results[i].totalTests = 0;
    }

    // Đọc và xử lý kết quả cho mỗi lệnh
    for (int i = 0; i < sizeof(instructions) / sizeof(instructions[0]); i++)
    {
        processInstructionResult(file, instructions[i], &results[i]);
        printf("\n");
    }

    // In tổng kết
    printf("Overall Results:\n");
    for (int i = 0; i < sizeof(instructions) / sizeof(instructions[0]); i++)
    {
        if (results[i].totalTests > 0)
        {
            double passPercentage = (double)results[i].totalPassed / results[i].totalTests * 100;
            printf("%s INSTRUCTION ----- Passed: %d, Total: %d\n", results[i].instruction, results[i].totalPassed, results[i].totalTests);
            printf("Overall Pass percentage: %.2lf%%\n", passPercentage);
            printf("\n");
        }
    }
    printf("\n");
    printf("Overall Results:\n");
    for (int i = 0; i < sizeof(instructions) / sizeof(instructions[0]); i++)
    {
        double passPercentage = (double)results[i].totalPassed / results[i].totalTests * 100;
        if (passPercentage > 80)
        {
            printf("-✔-\033[1;32mPASSED\033[0m-✔- %s instruction.\n", results[i].instruction);
        }
        else
        {
            printf("-X-\033[1;31mFAILED\033[0m-X- %s instruction.\n", results[i].instruction);
        }
        
    }
        fclose(file);

        return 0;
    }
