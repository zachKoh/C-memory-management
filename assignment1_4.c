#include <stdio.h>

double power(double denominator, int powerOf){
    double output = denominator;
    for (int i = 0; i < (powerOf-1); i++)
    {
        output = output * denominator;
    }
    return output;
}

double oneSigFig(double multiplier, int n){
    int count = 0;
    while(multiplier > 1){
        multiplier = multiplier/10;
        count++;
    }
    //printf("Multiplier after while loop: %lf\n", multiplier);
    multiplier = (int)(multiplier);
    multiplier = multiplier * (power((double)10, count));
    return(multiplier);
}

int main(void){
    long double multiplier, a, b, temp, temp3;
    int n, temp2;
    scanf("%Lf %Lf %d", &a, &b, &n);

    multiplier = power(10,n);

    //try to round to 1 sig fig
    multiplier = oneSigFig(multiplier, n);
    //printf("oneSigFug func returns: %Lf\n", multiplier);
    multiplier = multiplier + (1e-9 * (power(10,n)));

    //printf("Power func returns: %Lf\n", multiplier);
    temp = (a/b) * multiplier;
    //printf("temp: %Lf\n", temp);

    //temp2 = (int)(remainder(temp,(double)10));
    temp2 = (int)temp%10;
    printf("%d\n", temp2);

    return 0; 
}