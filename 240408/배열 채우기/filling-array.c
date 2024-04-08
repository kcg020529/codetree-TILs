#include <stdio.h>

int main() {

    int cnt = 0, a[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        if(a[i]==0 && i!=0)
            break;
        cnt+=1;
    }

    for(int i = cnt-1; i>=0; i--)
        printf("%d ", a[i]);

    return 0;
}