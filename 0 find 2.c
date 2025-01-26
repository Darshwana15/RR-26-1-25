#include <stdio.h>
bool startsWithZero(long long n) {
    if (n == 0) return true; 
    int digits = (int)log10(n);
    int firstDigit = n / pow(10, digits);
    return firstDigit == 0;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    if (startsWithZero(num))
        printf("The number starts with 0.\n");
    else
        printf("The number does not start with 0.\n");
    
    return 0;
}
