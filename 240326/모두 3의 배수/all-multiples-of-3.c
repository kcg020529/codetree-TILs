#include <stdio.h>
#include <stdbool.h>

int main() {
    
    bool satisfied = true;
    
    for(int i = 0;i<5;i++) {
        int n;
        scanf("%d", &n);

        if(n%3!=0){
            satisfied = false;
            break;
        }
    }
    (satisfied == false) ? printf("0") : printf("1");

    return 0;
}