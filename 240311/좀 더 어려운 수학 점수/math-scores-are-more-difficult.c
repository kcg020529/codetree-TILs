#include <stdio.h>

int main() {

    int a, b, A, B;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &A, &B);

    if(a==A) 
        printf("%c", (b>B)? 'A':'B');
    else
        printf("%c", (a>A)? 'A':'B');
    return 0;
}