#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int a = 0;
    for(int i = n; i>0; i--){

        for(int j = 0; j<a;j++){
            printf(" ");
            
        }
        a+=2;
        
        for(int j=0; j< 2*i-1; j++){
            printf("* ");
        }
        printf("\n");

    }

    return 0;
}

//2 * i - 1