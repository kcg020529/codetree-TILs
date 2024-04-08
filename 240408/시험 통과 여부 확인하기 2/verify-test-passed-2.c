#include <stdio.h>

int main() {

    int sum, n, cnt = 0, a[3];
    double avg;
    
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        sum = 0;
        avg = 0;

        for(int j = 0; j<3; j++){
            scanf("%d", &a[j]);
            sum+=a[j];
        }

        avg = sum / 4;
        if(avg>=60){
            printf("pass\n");
            cnt+=1;
        }
        else
            printf("fail\n");
    }
    printf("%d", cnt);

    return 0;
}