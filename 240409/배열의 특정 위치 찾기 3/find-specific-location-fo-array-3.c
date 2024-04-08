#include <stdio.h>
#define MAX 100

int main() {

    int a[MAX]; int sum = 0;

    int b = 0;
    while(1){
        scanf("%d", &a[b]);
        if(a[b] == 0)
            break;
        b+=1;
    }

    sum = a[b-1] + a[b-2] + a[b-3];
    printf("%d", sum);

    

    return 0;
}