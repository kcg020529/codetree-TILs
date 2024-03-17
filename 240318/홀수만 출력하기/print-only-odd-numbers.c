#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);

    for(int i =0;i<n;i++){
        scanf("%d", &a);

        if(a%3==0 && a%2==1)
            printf("%d\n", a);
    }
    
    return 0;
}