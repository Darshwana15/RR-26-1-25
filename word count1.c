#include <stdio.h>

int countDigits(long long n) {
    if (n == 0) return 1;  
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    printf("Number of digits: %d\n", countDigits(num));
    return 0;
}

