#include <stdio.h>

int findLargestDigit(long long n) {
    int maxDigit = 0;
    while (n > 0) {
        int digit = n % 10;  
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        n /= 10;  
    }
    return maxDigit;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;  

    printf("Largest digit: %d\n", findLargestDigit(num));

    return 0;
}
