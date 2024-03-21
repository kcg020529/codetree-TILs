#include <stdio.h>

int main() {

    int n, a=1;
    scanf("%d", &n);

    for(int i=1; i<=10;i++){
        a*=i;
        if(a>=n){
            printf("%d", i);
            break;
        }

    }
    return 0;
}