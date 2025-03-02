#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char names[100];
    fgets(names, sizeof(names), stdin);
    names[strcspn(names, "\n")] = 0;

    char *name = strtok(names, ";");
    
    if (name != NULL){
        printf("%s\n", name);
        while((name = strtok(NULL, ";")) != NULL){
            printf("%s\n", name);
        }
    }
    return 0;
}