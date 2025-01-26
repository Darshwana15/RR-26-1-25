#include <stdio.h>
#include <stdbool.h>

int countZerosRecursive(long long n, int count) {
    if (n == 0) return count;
    if (n % 10 == 0) count++;
    if (count >= 2) return count;
    return countZerosRecursive(n / 10, count);
}

bool containsAtLeastTwoZerosRecursive(long long n) {
    return countZerosRecursive(n, 0) >= 2;
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (containsAtLeastTwoZerosRecursive(num))
        printf("The number contains at least two zeros.\n");
    else
        printf("The number does not contain at least two zeros.\n");

    return 0;
}
