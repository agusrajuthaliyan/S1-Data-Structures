//Convert a binary number to decimal and vice-versa

#include <stdio.h>
#include <string.h>
#include <math.h>
int binaryToDecimal(const char *binary)
{
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }
    return decimal;
}
void decimalToBinary(int decimal) 
{
    if (decimal == 0) {
        printf("0");
        return;
    }
    int binary[32]; 
    int index = 0;
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }
    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
int main() {
    int choice;
    char binary[33];
    int decimal;
    printf("Choose an option:\n");
    printf("1. Convert binary to decimal\n");
    printf("2. Convert decimal to binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%32s", binary); 
            for (int i = 0; i < strlen(binary); i++) {
                if (binary[i] != '0' && binary[i] != '1') {
                    printf("Invalid binary number.\n");
                    return 1;
                }
            }
            decimal = binaryToDecimal(binary);
            printf("Decimal equivalent: %d\n", decimal);
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &decimal);
            decimalToBinary(decimal);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }
    return 0;
}