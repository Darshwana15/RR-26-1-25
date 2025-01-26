#include <stdio.h>

int main() {
    int N, digit, count = 0;
    int frequency[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &N);

  
    while (N != 0) {
        digit = N % 10;
        frequency[digit]++;
        N /= 10;
    }

    
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 1) {
            count++;
        }
    }

    printf("Count of repeating digits: %d\n", count);

    return 0;
}
