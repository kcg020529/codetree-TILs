#include <stdio.h>

int main() {

    int arr[100]; int c_arr[11] = {0,};

    for(int i = 0; i < 100; i++){

        scanf("%d", &arr[i]);

        if(arr[i] == 0)
            break;

        c_arr[arr[i]/10]++;
    }

    int cnt = 100;
    for(int i = 10; i > 0; i--){
        printf("%d - %d\n", cnt, c_arr[i]);
        cnt-=10;
    }
    return 0;
}