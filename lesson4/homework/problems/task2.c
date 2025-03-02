#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void space_deleter(){
    int len = 100;
    char* str = (char*)malloc((len + 1) * sizeof(char));
    int ind = 0;
    char c;
    while ((c = getchar()) != '\n' && ind < len){
        if (c != ' '){
            str[ind] = c;
            ind++;

        }
    }
    str[ind] = '\0';
    printf("%s", str);
    free(str);
}

int volwes_checker(char c){
     switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
            return 1;
        default:
            return 0;
    }

}

void replace_vowels(){
    int len = 100;
    char* str = (char*)malloc((len + 1) * sizeof(char));
    int ind = 0;
    char c;
    while ((c = getchar()) != '\n' && ind < len){
        if (volwes_checker(c) == 1){
            str[ind] = '*';
        }else{
            str[ind] = c;
        }
        ind++;

    }
    str[ind] = '\0';
    printf("%s", str);
    free(str);
}

void register_changer(){
    int len = 100;
    char* str = (char*)malloc((len + 1) * sizeof(char));
    int ind = 0;
    char c;
    while ((c = getchar()) != '\n' && ind < len){
        if (isupper(c)){
            str[ind] = tolower(c);
        }else if(islower(c)){
            str[ind] = toupper(c);
        }else{
            str[ind] = c;
        }
        ind++;

    }
    str[ind] = '\0';
    printf("%s", str);
    free(str);
}

typedef void (*pfunc)(void);

int main(){
    pfunc arr[] = {space_deleter, replace_vowels, register_changer};
    char command[20];
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = 0;
    if ((strcmp(command, "space_deleter")) == 0){
        arr[0]();
    }else if((strcmp(command, "replace_vowels")) == 0){
        arr[1]();
    }else if((strcmp(command, "register_changer")) == 0){
        arr[2]();
    }else{
        printf("Syntaxis error");
    }
}