#include <stdio.h>

int main() {
    int gender, age;
    scanf("%d", &gender);
    scanf("%d", &age);

    if(gender==0){
        (age>=19) ? printf("MAN") : printf("BOY");
    }
    else 
        (age>=19) ? printf("WOMAN") : printf("GIRL");
    return 0;
}