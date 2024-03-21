#include <stdio.h>

int main() {

    int n, a=1;
    scanf("%d", &n);

    for(int i=1; i<=10;i++){
        if(a>=n){
            printf("%d", i-1);
            break;
        }
        else
            a*=i;
    }
    return 0;
}