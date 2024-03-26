#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int a = n-1;
    
    for(int i=2;i<=a;i++){
        if(n%i==0){
            printf("C");
            break;
        }
        else
            continue;
    }

    return 0;
}