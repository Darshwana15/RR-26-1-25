#include <stdio.h>
#include <string.h>

int findLargestDigitString(long long n) {
    char str[100];
    sprintf(str, "%lld", n);
    int maxDigit = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {  
                        if (str[i] - '0' > maxDigit) {
                maxDigit = str[i] - '0';
            }
        }
    }
    return maxDigit;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    printf("Largest digit: %d\n", findLargestDigitString(num));

    return 0;
}
