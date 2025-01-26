#include <stdio.h>

long long reverseNumber(long long num) {
    long long rev = 0;
    while (num != 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    printf("Reversed Number: %lld\n", reverseNumber(num));
    return 0;
}
