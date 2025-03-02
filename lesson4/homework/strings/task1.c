#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char str[5000];
    char string_of_arr[100][50];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    int ind = 0;
    char *word = strtok(str, " ");
    while (word != NULL) {
        strcpy(string_of_arr[ind], word);
        ind++;
        word = strtok(NULL, " ");
    }

    for (int i = 0; i < ind; i++){
        char new_word[50];
        strncpy(new_word, string_of_arr[i], 2);
        if (0 == (strcmp(new_word, "SS")) || 0 == (strcmp(new_word, "ss") || 0 == (strcmp(new_word, "Ss"))) || 0 == (strcmp(new_word, "sS"))){
            printf("%s", string_of_arr[i]);
            break;
            
        }
    }
}
