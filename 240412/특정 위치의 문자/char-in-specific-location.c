#include <stdio.h>

int main() {
    
    char a[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    char A;
    scanf(" %c", &A);

    int cnt = 0;
    for(int i = 0; i<6; i++){
        if(a[i] == A);
            cnt = i;
            break;
    }
    printf("%d", cnt);


    return 0;
}