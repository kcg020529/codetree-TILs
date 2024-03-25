#include <stdio.h>

int main() {

    int x=0;

    while(1){
        int n;
        scanf("%d", &n);

        if(x==3)
            break;
        
        if(n%2==0){
            printf("%d\n", n/2);
            x++;
        }
        else
            continue;

    }

    return 0;
}