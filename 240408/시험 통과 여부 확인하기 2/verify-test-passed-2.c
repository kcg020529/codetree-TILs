#include <stdio.h>

int main() {

    int sum, n, cnt = 0, a[4];
    double avg;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        sum = 0;

        for(int j = 0; j<4; j++){
            scanf("%d", &a[j]);
            sum+=a[j];
        }

        avg = (double) sum / 4;

        if(avg >= 60){
            printf("pass\n");
            cnt+=1;
        }
        else
            printf("fail\n");
    }
    printf("%d", cnt);

    return 0;
}