#include <stdio.h>

int main() {
    char a, b,c;
    int x, y, z, n=0;

    scanf("%c %d", &a, &x);
    scanf(" %c %d", &b, &y);
    scanf(" %c %d", &c, &z);

    if(a=='Y' && x>=37) n+=1;
    if(b=='Y' && y>=37) n+=1;
    if(c=='Y' && z>=37) n+=1;

    if(n>=2)
        printf("E");
    else
        printf("N");

    return 0;
}