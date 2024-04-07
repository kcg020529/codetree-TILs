#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        
        for(int j = 0; j<n-i-1; j++)
            printf(" ");
        for(int j = 0; j<=i; j++)
            printf("* ");
        printf("\n");
    }
    int cnt=1;
    for(int i = n; i>1; i--){

        for(int j = 0; j<cnt; j++)
            printf(" ");
        for(int j = 0; j<i-1; j++)
            printf("* ");
        printf("\n");
        cnt++;
    }


    return 0;
}