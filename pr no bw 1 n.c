#include <stdio.h>

int main() {
    int N, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 2; i <= N; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
