#include <stdio.h>

int main() {

    int arr[10]; int count_arr[7] = {0,};

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        count_arr[arr[i]]++;
    }
    
    int cnt= 1;
    for(int i = 1; i < 7; i++){
        printf("%d - %d\n", cnt, count_arr[i]);
        cnt++;
    }

    return 0;
}