
#include <stdio.h>

int main() {
    int x, y, i;

    printf("Enter starting number: ");
    scanf("%d", &x);

    printf("Enter ending number: ");
    scanf("%d", &y);

    printf("Even numbers are: ");

    for(i = x; i <= y; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
