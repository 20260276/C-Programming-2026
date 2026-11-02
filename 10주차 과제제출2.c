#include <stdio.h>

#define SIZE 10

int main(void)
{
    int scores[SIZE] = {75, 90, 60, 85, 100, 45, 70, 95, 55, 80};
    int temp;

    // 버블 정렬 (오름차순)
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (scores[j] > scores[j + 1]) {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    printf("정렬 결과: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    return 0;
}