#include <stdio.h>

int main() {
	
    char a; int n;

    int c_arr[5] = {0,};

    int b;
    for(int i = 0; i < 3; i++){
        scanf(" %c %d", &a, &n);

        if(a=='Y' && n>=37)
            b = 1;
        else if(a=='N' && n>=37)
            b = 2;
        else if(a=='Y' && n<37)
            b = 3;
        else
            b = 4;
        c_arr[b]++;
    }

    for(int i = 1; i<5; i++){
        printf("%d ", c_arr[i]);
    }
    if(c_arr[1]>=2)
        printf("E");

    return 0;
}