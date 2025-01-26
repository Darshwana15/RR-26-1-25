#include <stdio.h>

int sumOfNumbers(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    int num1, num2, num3, num4;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    printf("The sum is: %d\n", sumOfNumbers(num1, num2, num3, num4));

    return 0;
}
