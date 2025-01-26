#include <stdio.h>

void printSecondAndFourthDigit(long long n) {
    int digits[20], count = 0;

    while (n > 0) {
        digits[count++] = n % 10;
        n /= 10;
    }

    if (count < 4) {
        printf("The number does not have enough digits.\n");
    } else {
        printf("2nd digit: %d, 4th digit: %d\n", digits[count - 2], digits[count - 4]);
    }
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    printSecondAndFourthDigit(num);

    return 0;
}
