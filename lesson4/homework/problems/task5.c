#include <stdio.h>
#include <strings.h>
#include <stdlib.h>


char* alloc_memory(int size){
    char* allocated_memory = malloc(sizeof(char) * size);
    return allocated_memory;
}

void free_memory(char* memory){
    free(memory);
}

void append_text(char* memory, int size){
    fgets(memory, size, stdin);
    memory[strcspn(memory, "\n")] = 0; 
}

void print_text(char* memory){
    printf("%s\n", memory);
}


int main(){
    char* memory = NULL;
    int memory_size = 0;

    while(1){
        printf("Введите команду для обработки:\n");
        char command[50];
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0;

        if (strcmp("alloc", command) == 0){

            printf("Введите размер памяти, который хотите выделить\n");
            int size;
            scanf("%d", &size);
            getchar();

            if (memory != NULL) {
                free_memory(memory);
            }
            memory = alloc_memory(size);
            if (memory == NULL) {
                continue; 
            }
            memory_size = size;
        
        }else if (strcmp(command, "free") == 0){
            if (memory != NULL){
                free_memory(memory);
                memory = NULL;
                memory_size = 0;
            }else{
                printf("Вы еще не выделили память для дальнейшей работы с ней\n");
            }
        }else if (strcmp(command, "exit") == 0){
            if (memory != NULL) {
                free_memory(memory);
            }
            break;
        }else if (strcmp(command, "text") == 0){
            if (memory != NULL){
                append_text(memory, memory_size + 1);
            }else{
                printf("Вы еще не выделили память для дальнейшей работы с ней\n");
            }
        }else if (strcmp(command, "print") == 0){
            if (memory != NULL){
                print_text(memory);
            }else{
                printf("Вы еще не выделили памяти для дальнейшей работы с ней\n");
            }
        }else{  
            printf("Неправильная команда\n");
        }


    }
    return 0;
}