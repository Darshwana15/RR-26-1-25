#include <stdio.h>

void checkEvenOdd(long long num) {
    if (num == 0) {
        printf("The number is Even.\n");
        return;
    }
    if (num == 1) {
        printf("The number is Odd.\n");
        return;
    }
    checkEvenOdd(num - 2);
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    checkEvenOdd(num);
    
    return 0;
}
