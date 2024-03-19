#include <stdio.h>

int main() {

    int n, sum = 0;
    double avg;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);

        sum+=a;
    }
    avg = (double)sum / n;

    printf("%d %.1lf", sum, avg);

    return 0;
}