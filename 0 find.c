#include <stdio.h>
#include <stdbool.h>

bool startsWithZero(long long n) {
    char str[100];
    sprintf(str, "%lld", n);
    return str[0] == '0';
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
