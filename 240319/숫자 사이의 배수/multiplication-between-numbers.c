#include <stdio.h>

int main() {

    int a, b, sum = 0, cnt=0;
    double avg=0;

    scanf("%d %d", &a, &b);

    for(int i=a;i<=b;i++){
        if(i%5==0 || i%7==0){
            sum+=i;
            cnt+=1;
        }
    }

    avg = (double)sum/cnt;
    printf("%d %.1lf", sum, avg);

    return 0;
}