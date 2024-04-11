#include <stdio.h>

int main() {

    int a, b;
    int c_arr[10] = {1,};

    scanf("%d %d", &a, &b);
    while(1){

        a = a / b;
        c_arr[a%b]++;

        if(a/b == 0)
            break;
    }

    int sum = 0;
    for(int i = 0; i<10;i++)
        sum = sum + c_arr[i]*c_arr[i];
    
    printf("%d", sum);
    

    return 0;
}