#include <stdio.h>

int main() {

    int a[100];
    int n;

    scanf("%d", &n);
    printf("%d %d ", a[0] = 1, a[1] = n);

    for(int i = 2; i < 100 i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i]);

        if(a[i]>=100)
            break;
    }


    return 0;
}