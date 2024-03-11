#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);

    if(a==2){
        printf("28");
    }
    else if(a<=7){
        (a%2==0) ? printf("30") : printf("31");
    }
    else {
        (a%2==0) ? printf("31") : printf("30");
    }

    return 0;
}