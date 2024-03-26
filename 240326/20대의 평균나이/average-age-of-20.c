#include <stdio.h>

int main() {

    int n, cnt=0;
    double avg = 0;
    
    while(1){
        scanf("%d", &n);
        if(n>=30)
            break;
        avg+=n;
        cnt++;

    }

    avg/=cnt;
    printf("%.2lf", avg);

    return 0;
}