#include <stdio.h>

int main() {
    // 홀수 출력
    printf("Odd numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n\n");

    // 짝수 출력
    printf("Even numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

