#include <stdio.h>
#define MAX 100

int main() {

    int a[MAX]; int b[MAX];
    
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i]%2==0){
            b[cnt] = a[i];
            cnt++;
        }
    }
    for(int i = 0; i < cnt; i++){
        printf("%d ", b[i]);
    }
    

    return 0;
}