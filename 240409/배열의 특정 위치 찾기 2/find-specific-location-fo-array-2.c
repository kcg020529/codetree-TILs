#include <stdio.h>

int main() {

    int arr[10];
    int a = 0; int b = 0;

    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 1; i<10; i+=2)
        a+=arr[i];
    for(int i = 0; i<10; i+=2)
        b+=arr[i];

    if(a>b)
        printf("%d", a-b);
    else
        printf("%d", b-a);

    return 0;
}