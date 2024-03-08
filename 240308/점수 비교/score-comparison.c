#include <stdio.h>

int main() {
    
    int A, B, a, b;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &a, &b);

    printf("%d", (A>a && B>b) ? 1:0);

    return 0;
}