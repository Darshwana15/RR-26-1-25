#include <stdio.h>

int main() {
    long long num;

    printf("Enter a number: ");
    scanf("%lld", &num);

    (num > 0) ? printf("The number is Positive.\n") :
    (num < 0) ? printf("The number is Negative.\n") :
                printf("The number is Zero.\n");

    return 0;
}
