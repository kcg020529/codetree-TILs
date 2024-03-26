#include <stdio.h>

int main() {
    
    int n, cnt = 1;
    scanf("%d", &n);

    while(1){
        if(n==2)
            break;
        n /= 2;
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}