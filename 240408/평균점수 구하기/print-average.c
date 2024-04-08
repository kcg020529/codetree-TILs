#include <stdio.h>

int main() {

    int cnt = 0; double a[8], sum = 0;
    
    for(int i = 0; i<8; i++){
        scanf("%lf", &a[i]);
        sum += a[i];
        cnt+=1;
    }
    double avg = sum/cnt;
    printf("%.1lf", avg);
    
    return 0;
}