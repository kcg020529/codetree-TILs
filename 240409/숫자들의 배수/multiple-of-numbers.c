#include <stdio.h>
#define MAX 100

int main() {
    
   int n, b=0; int arr[MAX];
   scanf("%d", &n);

   printf("%d %d ", arr[0] = n, arr[1] = n + n);
   for(int i = 2; i<100; i++){
        if(b==2)
           break;
        arr[i] = arr[0]+arr[i-1];
        printf("%d ", arr[i]);
        if(arr[i]%5==0)
            b++;
   }
    return 0;
}