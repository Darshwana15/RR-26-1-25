#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    for (int i = num1 + 1; i < num2; i++) {
        printf("%d ", i);
    }

    return 0;
}
