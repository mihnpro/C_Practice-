#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    char password[100];
    fgets(password, sizeof(password), stdin);
    password[strcspn(password,  "\n")] = 0;

    if (0 == (strcasecmp(password, "LAUNCH-2025"))){
        printf("Correct");
    }else{
        printf("Incorrect");
    }

}
