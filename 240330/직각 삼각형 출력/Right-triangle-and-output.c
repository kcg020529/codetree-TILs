#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int a = 1;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=a;j++){
            printf("*");
        }
        printf("\n");
        a+=2;
    }
    
    return 0;
}