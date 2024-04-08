#include <stdio.h>

int main() {

    int sum = 0, cnt = 0, a[10];
    double avg;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

	for(int i = 0; i < 10; i++) {
        if(a[i] >= 250) 
			break;
        sum += a[i];
        cnt++;
    }
	
    printf("%d %.1lf", sum, avg = (double)sum/cnt);
    return 0;
}