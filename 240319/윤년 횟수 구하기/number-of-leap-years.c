#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int cnt=0;

    for(int i=1;i<n;i++){
        if(i%4==0){
            if(i%100==0 && i%400==1){
                i+=1;
                i-=1;
            }
            else
                cnt++;

        }
    }
    printf("%d", cnt);


    return 0;
}