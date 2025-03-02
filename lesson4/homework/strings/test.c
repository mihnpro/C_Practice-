#include <stdio.h>
#include <strings.h>
#include <ctype.h>


int main(){
    char word[50];
    char str[] = "Misha";
    for (int i = 0; str[i] != '\0'; i++){
        printf("%s\n", strcpy(word, str[i]));
    }
}