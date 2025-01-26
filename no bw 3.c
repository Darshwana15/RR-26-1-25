#include <stdio.h>

void printNumbers(int num1, int num2) {
    if (num1 + 1 < num2) {
        printf("%d ", num1 + 1);
        printNumbers(num1 + 1, num2);
    }
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printNumbers(num1, num2);

    return 0;
}
