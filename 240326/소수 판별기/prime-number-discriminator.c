#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    
    bool satisfied = true;

    for(int i = 2; i < n; i++) {
        if(n%i==0){
            satisfied = false;
        }
    }
    (satisfied = true) ? printf("P") : printf("C");
    
    return 0;
}