#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    bool satisfied = true;

    for(int i = 2; i < n; i++) {
        if(n%i==0){
            satisfied = false;
            break;
        }
    }
    (satisfied = false) ? printf("C") : printf("P");
    

    return 0;
}