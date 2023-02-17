#include <stdio.h>

int main(void){
    char string[100];
    int alphabetCount, digitCount, spacesCount, otherCharsCount, i, ascii;
    i = alphabetCount = digitCount = spacesCount = otherCharsCount = 0;
    scanf("%s", string);
    while(string[i] != '\0' || string[i] == ' '){
        ascii = string[i];
        if((64<ascii && ascii<91) || (96<ascii && ascii<123)){
            alphabetCount++;

        }else if(47<ascii && ascii<58){
            digitCount++;

        }else if(ascii == 32){
            spacesCount++;

        }else{
            otherCharsCount++;

        }
        i++;
        printf("%i\n", i);
    }
    printf("%i %i %i %i", alphabetCount, digitCount, spacesCount, otherCharsCount);
}