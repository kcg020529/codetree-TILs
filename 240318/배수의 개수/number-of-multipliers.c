#include <stdio.h>

int main() {
    int a = 0, b = 0;

    for(int i=0;i<10;i++){
        int c;
        scanf("%d", &c);

        if(c%3==0)
            a++;
        if(c%5==0)
            b++;
    }
    printf("%d %d", a, b);

    return 0;
}