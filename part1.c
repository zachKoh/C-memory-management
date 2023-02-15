#include <stdio.h>

int main(void){
    int r1, r2;
    double area, circumference;
    area = circumference = 0;
    scanf("%i %i", &r1, &r2);
    while(r1<=r2){
        area = area+(3.14*(r1*r1));
        circumference = circumference+(6.28*r1);
        r1++;
    }
    printf("%.3f\n%.3f", area, circumference);
}