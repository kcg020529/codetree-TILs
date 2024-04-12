#include <stdio.h>

int main() {

    int n, m;
    int a[100] = {0,};

    scanf("%d %d", &n, &m);

    int cnt = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i]==m)
            cnt++;
    }
    printf("%d", cnt);

    return 0;
}