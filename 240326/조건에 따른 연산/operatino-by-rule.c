#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int cnt = 0;

    while(n<=1000){
        if(n%2==0){
            n*=3;
            n+=1;
            cnt++;
        }
        else{
            n*=2;
            n+=2;
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}