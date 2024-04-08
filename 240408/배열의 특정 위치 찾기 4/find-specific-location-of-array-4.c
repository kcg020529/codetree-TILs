#include <stdio.h>

int main() {
    int sum = 0, cnt = 0, a[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        if(a[i]==0)
            break;
        if(a[i]%2==0){
            sum+=a[i];
            cnt+=1;
        }
    }
    printf("%d %d", cnt, sum);

    return 0;
}