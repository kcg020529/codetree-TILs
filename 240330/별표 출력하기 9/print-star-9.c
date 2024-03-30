#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int a = 0;
    for(int i = 0; i<n; i++){

        for(int j = n+2; j>a; j--){
            printf(" ");
        }
        for(int j = 0; j<i*2+1; j++){
            printf("* ");
        }
        a+=2;
        printf("\n");

    }

    return 0;
}