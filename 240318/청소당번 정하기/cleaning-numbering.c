#include <stdio.h>

int main() {

    int n, x=0, cnt2=0, cnt3=0, cnt12=0;

    scanf("%d", &n);

    for(int i=0;i<=n;i++){
        if(x==0){
            x++;
        }
        else{
            if(i%12==0)
                cnt12++;
            else if(i%3==0)
                cnt3++;
            else if(i%2==0)
                cnt2++;
        }
        x++;
    }
    printf("%d %d %d", cnt2, cnt3, cnt12);

    return 0;
}