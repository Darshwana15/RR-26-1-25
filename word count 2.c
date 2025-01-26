#include <stdio.h>
#include <string.h>

int countDigitsUsingString(long long n) {
    char str[100];
    sprintf(str, "%lld", n);
    return strlen(str);
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);
    printf("Number of digits: %d\n", countDigitsUsingString(num));
    return 0;
}
