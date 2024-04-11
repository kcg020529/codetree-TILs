#include <stdio.h>

int main() {

    int arr[100];
    int c_arr[10] = {0, };

    for(int i = 0; i<100; i++){
        
        scanf("%d", &arr[i]);
        
        if(arr[i] == 0)
            break;
        
        c_arr[arr[i]/10]++;
    }
    for(int i = 1; i<10; i++)
        printf("%d - %d\n", i, c_arr[i]);

    return 0;
}