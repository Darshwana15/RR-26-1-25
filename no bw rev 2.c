#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int i = num2 - 1;
    while (i > num1) {
        printf("%d ", i);
        i--;
    }

    return 0;
}
