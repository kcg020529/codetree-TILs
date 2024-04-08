#include <stdio.h>

int main() {

    int a[10];
    int sum = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i<10; i+=2)
        sum += a[i];
    printf("%d ", sum);

    double avg = 0;
    for(int i = 2; i<10; i+=3)
        avg += a[i];
    printf("%.1lf", avg / 3);

    return 0;
}