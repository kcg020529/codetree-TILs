#include <stdio.h>

int main() {

    double eye_left, eye_right;
    scanf("%lf %lf", &eye_left, &eye_right);

    if (eye_left >=1 && eye_right>=1) printf("High");
    else if (eye_left>=0.5 && eye_right>=0.5) printf("Middle");
    else printf("Low");


    return 0;
}