#include <stdio.h>

int main() {

    int a, b;
    scanf("%d", &a);

    for(int i=1;i<=a;i++){
        b=i;
        b/=10;
        if((i%3==0) || (b%10==3 || b%10==6 || b%10==9) || (i/10==3 || i/10==6 || i/10==9))
            printf("%d ", 0);
        else
            printf("%d ", i);
    }
}