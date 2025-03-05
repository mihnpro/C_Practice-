#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


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


int by_alphabet(const void *a, const void *b) {
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;
    return strcmp(str1, str2);
}

int by_length(const void *a, const void *b) {
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;
    return strlen(str1) - strlen(str2);
}

int by_vowel(const void *a, const void *b) {
    char *str1 = *(char **)a;
    char *str2 = *(char **)b;
    int cntr1 = 0;
    int cntr2 = 0;

    for (int i = 0; str1[i] != '\0'; i++){
        if (volwes_checker(str1[i]) == 1){
            cntr1++;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++){
        if (volwes_checker(str2[i]) == 1){
            cntr2++;
        }
    }
    if (cntr1 > cntr2){
        return cntr1;

    }
    return cntr2;
}   

typedef int (*function)(const void*, const void*);

typedef struct {
    char name[10];
    function func;
}Sort_func;

int main(){
    int n;
    scanf("%d", &n);
    getchar();

    int ind = 0;
    char arr[100][50];

    for(int i = 0; i < n; i++){
        char str[100];
        printf("Введите строку %d:\n", i + 1);
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;
        char* word;
        word = strtok(str, " ");

        while (word != NULL){
            strcpy(arr[ind], word);
            word = strtok(NULL, " ");
            ind++;
        }
        
    }
    char *words[ind];
    for (int i = 0; i < ind; i++) {
        words[i] = arr[i];
    }

    Sort_func volw, alph, len;
    volw.func = by_vowel;
    alph.func = by_alphabet;
    len.func = by_length;
    strcpy(alph.name, "alpha");
    strcpy(len.name, "len");
    strcpy(volw.name, "volw");

    printf("Выберите функцию для сортировки:\n");

    char command[10];
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = 0; 

    if (strcmp(volw.name, command) == 0){
        qsort(words, ind, sizeof(char*), volw.func);
    }else if (strcmp(alph.name, command) == 0){
        qsort(words, ind, sizeof(char*), alph.func);
    }else if (strcmp(len.name, command) == 0){
        qsort(words, ind, sizeof(char*), len.func);
    }else{
        printf("Такой функции нет");
        return 1;
    }

    printf("Слова:\n");
    for (int i = 0; i < ind; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
    
