#include <stdio.h>
#include <string.h>

void printSecondAndFourthDigit(long long n) {
    char str[100];
    sprintf(str, "%lld", n);
    
    if (strlen(str) >= 4) {
        printf("2nd digit: %c, 4th digit: %c\n", str[1], str[3]);
    } else {
        printf("The number does not have enough digits.\n");
    }
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    
    printSecondAndFourthDigit(num);
    
    return 0;
}
