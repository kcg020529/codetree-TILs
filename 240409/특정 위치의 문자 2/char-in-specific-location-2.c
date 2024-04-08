#include <stdio.h>

int main() {

    char a[10];

    for(int i = 0; i < 10; i++)
        scanf(" %c", &a[i]);
    
    for(int j = 1; j < 10; j+=3)
        printf("%c ", a[j]);

    return 0;
}