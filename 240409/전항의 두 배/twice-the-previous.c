#include <stdio.h>

int main() {

    int a[100];
    scanf("%d %d", &a[0], &a[1]);

    printf("%d %d ", a[0], a[1]);

    int cnt = 1;
    while(1){
        cnt++;
        a[cnt] = a[cnt-1] + a[cnt-2]*2;

        printf("%d ", a[cnt]);
        if(cnt>=9)
            break;
    }

    return 0;
}