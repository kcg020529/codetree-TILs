#include <stdio.h>

int main() {

    int n, i=1;
    scanf("%d", &n);

    while(n>=0){
        n/=i;
        if(n<=0){
            printf("%d", i);
            break;
        }
        else
            i++;
    }

    return 0;
}