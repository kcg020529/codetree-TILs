#include <stdio.h>

int main() {

    int sum = 0, cnt = 0;
    double avg;
    
    
    for(int i = 0; i < 10; i++){
        int a;
        scanf("%d", &a);

        if(a>=0 && a<=200)
            sum+=a;
            cnt+=1;
        }
    avg = (double)sum / (cnt-3);
    printf("%d %.1lf", sum, avg);
    
    return 0;
}