#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binaryNum[32];
    int i = 0;

    while (decimal > 0) {
        binaryNum[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary equivalent: ");
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binaryNum[j]);
        }
    }
    printf("\n");
}

// Function to convert binary to decimal
int binaryToDecimal(long binary) {
    int decimalNumber = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimalNumber += remainder * base;
        binary /= 10;
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    int choice;
    long binaryNumber;
    int decimalNumber;

    printf("Choose an option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &decimalNumber);
            decimalToBinary(decimalNumber);
            break;
        case 2:
            printf("Enter a binary number: ");
            scanf("%ld", &binaryNumber);
            printf("Decimal equivalent: %d\n", binaryToDecimal(binaryNumber));
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}

