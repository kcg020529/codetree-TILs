#include <stdio.h>

int main() {

    int n, i=1;
    scanf("%d", &n);

    while(n>=1){
        n/=i;
        if(n<=1){
            printf("%d", i);
            break;
        }
        i++;
    }

    return 0;
}