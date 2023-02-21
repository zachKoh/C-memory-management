#include <stdio.h>

int main(void){
    double a, b;
    int temp, temp2;
    double n;
    scanf("%lf %lf", &a, &b);
    printf("%lf\n", a);
    printf("%lf\n", b);
    temp = (a/b)*1000000;
    temp2 = temp%10;
    n = a/b;
    printf("%i\n%i\n", temp, temp2);
}       