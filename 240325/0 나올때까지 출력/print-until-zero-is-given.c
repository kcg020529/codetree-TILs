#include <stdio.h>

int main() {

    while(1){
        int n;
        scanf("%d", &n);

        if(n==0)
            break;
        printf("%d\n", n);
    }
    return 0;
}