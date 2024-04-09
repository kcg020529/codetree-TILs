#include <stdio.h>
#define MAX 100

int main() {
    
    int n; int a[MAX];

    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++){
        a[i] = a[i]*a[i];
        printf("%d ", a[i]);
    }


    return 0;
}