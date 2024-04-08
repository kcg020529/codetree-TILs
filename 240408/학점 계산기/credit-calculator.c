#include <stdio.h>
#define max 5

int main() {
    
    double sum = 0, a[max];
    int n, cnt = 0;

    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%lf", &a[i]);
        sum += a[i];
        cnt += 1;
    }
    double avg = sum / cnt;

    if(avg>=4.0)
        printf("%.1lf\nPerfect", avg);
    else if(avg>=3.0)
        printf("%.1lf\nGood", avg);
    else
        printf("Poor");



    return 0;
}