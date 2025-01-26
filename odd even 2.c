#include <stdio.h>

void checkEvenOdd(long long num) {
    if ((num & 1) == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    checkEvenOdd(num);
    
    return 0;
}
