#include <stdio.h>

int main() {

    int x, y;
    char a;

    while(1){
        
        scanf("%d %d %c", &x, &y, &a);

        printf("%d\n", x*y);

        if(a=='C')
            break;
        

    }

    return 0;
}