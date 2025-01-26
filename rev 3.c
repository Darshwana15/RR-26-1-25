#include <stdio.h>
#include <string.h>

void reverseUsingString(char str[]) {
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char num[100];
    printf("Enter a number: ");
    scanf("%s", num);

    printf("Reversed Number: ");
    reverseUsingString(num);
    
    return 0;
}
