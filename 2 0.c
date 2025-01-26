#include <stdio.h>
#include <stdbool.h>

bool containsAtLeastTwoZeros(long long n) {
    int count = 0;
    while (n != 0) {
        if (n % 10 == 0)
            count++;
        if (count >= 2)
            return true;
        n /= 10;
    }
    return count >= 2;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (containsAtLeastTwoZeros(num))
        printf("The number contains at least two zeros.\n");
    else
        printf("The number does not contain at least two zeros.\n");

    return 0;
}
