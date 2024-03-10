#include <stdio.h>

int main() {

    int a, b;
    char c, d;

    scanf("%d %c", &a, &c);
    scanf("%d %c", &b, &d);

    if ((a>18 || b>18) && c=='M')
        printf("1");
    else
        printf("0");

    return 0;
}