#include <stdio.h>
#include <math.h>

int main(void){
    double a, b, temp3;
    int temp, temp2;
    double n;
    scanf("%lf %lf %lf", &a, &b, &n);
    temp = (a/b) * pow(10,n);
    temp2 = temp%10;
    n = a/b;
    printf("%i\n", temp2);
}       