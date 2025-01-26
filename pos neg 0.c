#include <stdio.h>

void checkNumberType(long long num) {
    if (num > 0) {
        printf("The number is Positive.\n");
    } else if (num < 0) {
        printf("The number is Negative.\n");
    } else {
        printf("The number is Zero.\n");
    }
}

int main() {
    long long num;
    
    printf("Enter a number: ");
    scanf("%lld", &num);

    checkNumberType(num);

    return 0;
}
