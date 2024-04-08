#include <stdio.h>
#define MAX 100

int main() {

    int n, a[MAX];
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = n-1; i>=0; i--){
        if(a[i]%2==0)
            printf("%d ", a[i]);
    }

    return 0;
}