#include <stdio.h>

int main() {

    int y;
    scanf("%d", &y);

    if (y%4==0){
        printf("true");
    }
    else if((y%100==0 && y%400==1) || y%4==1) {
        printf("false");
    }

    return 0;
}