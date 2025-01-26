#include <stdio.h>
#include <string.h>

int differenceOddEvenPosDigits(char *num) {
    int oddSum = 0, evenSum = 0;
    int length = strlen(num);

    for (int i = 0; i < length; i++) {
        int digit = num[i] - '0';  

        
        if ((i + 1) % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
    }

    return (oddSum - evenSum);
}

int main() {
    char num[101];  

    printf("Enter the number (up to 100 digits): ");
    scanf("%100s", num);

    int result = differenceOddEvenPosDigits(num);
    printf("Difference between sum of odd and even position digits: %d\n", result);

    return 0;
}
