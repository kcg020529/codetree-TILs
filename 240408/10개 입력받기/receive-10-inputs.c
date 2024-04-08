#include <stdio.h>

int main() {

    int sum = 0, cnt = 0, a[10];

    for(int i = 0; i<10; i++){
        scanf("%d", &a[i]);
        if(a[i] == 0)
            break;
        cnt+=1;
        sum+=a[i];
    }
    double avg = (double) sum / cnt;
    printf("%d %.1lf", sum, avg);


    return 0;
}