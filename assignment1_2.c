#include <stdio.h>

int main(void){
    char character;
    int alphabetCount, digitCount, spacesCount, otherCharsCount, i, ascii;
    i = alphabetCount = digitCount = spacesCount = otherCharsCount = 0;
    while(scanf("%c", &character) != EOF){
        //printf("Tester: %c\n", character);
        ascii = character;
        if((64<ascii && ascii<91) || (96<ascii && ascii<123)){
            //printf("alphabet\n");
            alphabetCount++;

        }else if(47<ascii && ascii<58){
            //printf("digit\n");
            digitCount++;

        }else if(ascii == 32){
            //printf("space\n");
            spacesCount++;

        }else{
            //printf("other char\n");
            otherCharsCount++;

        }
        i++;
    }
    printf("%i %i %i %i", alphabetCount, digitCount, spacesCount, otherCharsCount);
}