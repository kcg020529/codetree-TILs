#include <stdio.h>

int main() {
    
    char word[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };

    char a;
    scanf("%c", &a);

    int idx = -1;

    for(int i = 0; i < 6; i++){
        if(word[i] == a)
            idx = i;
    }
    
    if(idx == -1)
		printf("None");
	else
		printf("%d", idx);
    
    return 0;
}