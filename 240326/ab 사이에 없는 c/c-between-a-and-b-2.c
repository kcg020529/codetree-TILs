#include <stdio.h>
#include <stdbool.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    bool satisfied = true;

    for(int i = a; i <= b; i++){
        if(a%c==0 || b%c==0){
            satisfied = false;
            break;
        }
    }

    if(satisfied == false)
        printf("NO");
    else
        printf("YES");

}