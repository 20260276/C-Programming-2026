#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
    int scores[SIZE];
    int sum = 0;
    int max, min;
    double average;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < SIZE; i++) {
        scores[i] = rand() % 101;
    }

    max = scores[0];
    min = scores[0];

    printf("===== 학생별 점수 =====\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%2d번 학생: %3d점\n", i + 1, scores[i]);

        sum += scores[i];

        if (scores[i] > max) {
            max = scores[i];
        }

        if (scores[i] < min) {
            min = scores[i];
        }
    }

    average = (double)sum / SIZE;

    printf("\n===== 점수 통계 =====\n");
    printf("학생 수: %d명\n", SIZE);
    printf("최댓값: %d점\n", max);
    printf("최솟값: %d점\n", min);
    printf("평균: %.2f점\n", average);

    return 0;
}