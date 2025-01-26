#include <stdio.h>

int main() {
    int N, digit, temp, result = 0, place = 1;
    int frequency[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &N);

    temp = N;
    while (temp != 0) {
        digit = temp % 10;
        frequency[digit]++;
        temp /= 10;
    }

    temp = N;
    while (temp != 0) {
        digit = temp % 10;
        if (frequency[digit] == 1) {
            result += digit * place;
            place *= 10;
        }
        temp /= 10;
    }

    printf("Number after removing repeating digits: %d\n", result);

    return 0;
}
