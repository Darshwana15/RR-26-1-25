#include <stdio.h>
#include <stdbool.h>

bool startsWithZeroBitwise(long long n) {
    while (n >= 10) {
        n >>= 1;  
    }
    return n == 0;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    if (startsWithZeroBitwise(num))
        printf("The number starts with 0.\n");
    else
        printf("The number does not start with 0.\n");
    
    return 0;
}
