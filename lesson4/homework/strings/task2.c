#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char message[100];
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;
    int start;
    int end;
    for (int i = 0; i < strlen(message); i++){
        if (message[i] != '#' && message[i] != '*'){
            start = i;
            break;
        }
    }
    for (int i = strlen(message) - 1; i >= 0; i--){
        if (message[i] != '#' && message[i] != '*'){
            end = i;
            break;
        }
    }
    char res[100];
    strncpy(res, message + start, end - start + 1);
    res[end - start + 1] = '\0';
    printf("%s", res);


}