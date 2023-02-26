#include <stdio.h>

int main(void){
    int ascii;
    while(scanf("%d", &ascii) != EOF){
        printf("%c", ascii);
    }
    return 0;
}