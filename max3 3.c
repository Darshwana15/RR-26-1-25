#include <stdio.h>

int main() {
    int num[3], i, max;

    printf("Enter three numbers: ");
    for(i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }

    max = num[0];
    for(i = 1; i < 3; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
