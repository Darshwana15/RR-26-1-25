#include <stdio.h>

int main() {
    int num1, num2, num3, num4, sum;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    sum = num1 + num2 + num3 + num4;

    printf("The sum is: %d\n", sum);

    return 0;
}
