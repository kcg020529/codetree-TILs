#include <stdio.h>
#define MAX 100

int main() {
    
   int n; int arr[MAX];
   scanf("%d", &arr[0]);

    for(int i = 1; i < 100; i++){
        arr[i] = arr[i-1] + arr[0];
    }

    n = 0;
    for(int i = 0; i < 100; i++){
        printf("%d ", arr[i]);
        if(arr[i]%5 == 0)
            n++;
        if(n ==2)
            break;
    }


    return 0;
}