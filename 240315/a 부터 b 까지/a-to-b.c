#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d ", a);
    for(int i=a;i<b;){
        if(i%2==1){
            i*=2;
            printf("%d ", i);
        }
        else{
            i+=3;
            printf("%d ", i);
        }
    }
    return 0;
}