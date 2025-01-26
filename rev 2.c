#include <stdio.h>

long long reverseRecursive(long long num, long long rev) {
    if (num == 0)
        return rev;
    return reverseRecursive(num / 10, rev * 10 + (num % 10));
}

int main() {
    long long num;
    printf("Enter a number: ");
    scanf("%lld", &num);

    printf("Reversed Number: %lld\n", reverseRecursive(num, 0));
    return 0;
}
