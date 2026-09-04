#include <stdio.h>

int main() {
    

    int hour1, hour2;
    int min1, min2;

    scanf_s("%d %d", &hour1, &min1);
    scanf_s("%d %d", &hour2, &min2);

    int ih = hour1 - hour2;
    int im = min1 - min2;

    if (im < 0) {
        im += 60;
        ih--;
    }

    printf("时差为%d时%d分\n", ih, im);

    return 0;
}