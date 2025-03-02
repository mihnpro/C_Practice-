#include <stdio.h>
#include <ctype.h>
#include <string.h>


void upper(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    char * pstr = str;

    while (*pstr){
        *pstr = toupper(*pstr);
        pstr++;
    }
    printf("%s\n", str);
}

void lower(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    char * pstr = str;

    while (*pstr){
        *pstr = tolower(*pstr);
        pstr++;
    }
    printf("%s\n", str);
}

void reverse(){
    char str[100];
    char clonestr[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    strcpy(clonestr, str);
    int j = strlen(str);
    for (int i = 0; i < j; i++){
        clonestr[i] = str[j -i - 1];
    }
    printf("%s\n", clonestr);
    

}

typedef void (*pfunc)(void);

typedef struct {
    pfunc function;
    char command[10];
} Command;

int main(){
    Command up, low, rev;
    up.function = upper;
    low.function = lower;
    rev.function = reverse;
    strcpy(up.command, "upper");
    strcpy(low.command, "lower");
    strcpy(rev.command, "reverse");
    Command commands[] = {up, low, rev};

    while (1){
        char comm[100];
        scanf("%99s", comm);
        getchar();
        if (0 ==(strcmp(comm, commands[0].command))){
            commands[0].function();

        } else if (0 ==(strcmp(comm, commands[1].command))) {
            commands[1].function();

        }else if (0 ==(strcmp(comm, commands[2].command))) {
            commands[2].function();

        }else if (0 == (strcmp(comm, "exit"))){
            printf("Goodbye\n");
            break;
        }else{
            printf("Invalid command\n");
        }
    }
    return 0;
}