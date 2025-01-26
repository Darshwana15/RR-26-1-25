#include <stdio.h>

int main() {
    int num[4], i, sum = 0;

    printf("Enter four numbers: ");
    for(i = 0; i < 4; i++) {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 4; i++) {
        sum += num[i];
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
