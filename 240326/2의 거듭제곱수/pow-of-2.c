#include <stdio.h>

int main() {
    
    int n, cnt = 1;
    scanf("%d", &n);

    while(1){
        n /= 2;
        cnt++;

        if(n==2)
            break;
    }
    printf("%d", cnt);

    return 0;
}