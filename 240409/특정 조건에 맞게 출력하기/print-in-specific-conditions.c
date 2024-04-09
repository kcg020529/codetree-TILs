#include <stdio.h>

int main() {

    int a[100];

    int cnt = 0;
    for(int i = 0; i<100; i++){
        scanf("%d", &a[i]);
        cnt++;
        if(a[i] == 0)
            break;
    }

    for(int i = 0; i < cnt-1 ; i++)
        if(a[i]%2==0)
            printf("%d ", a[i]/2);
        else
            printf("%d ", a[i]+3);

    return 0;
}