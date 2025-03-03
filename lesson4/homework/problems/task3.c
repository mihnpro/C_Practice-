#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

int addition(int op1, int op2){return op1 + op2;}
int subtraction(int op1, int op2){return op1 - op2;}
float division(int op1, int op2){
    if (op2 == 0){
        printf("Zero division\n");
        return -1.0f;
    }else{
        return (float)op1 / op2;
    }
}
int multiplication(int op1, int op2){return op1 * op2;}

int main(){
    char str[15];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char * word = strtok(str, " ");
    char* op1 = word;
    word = strtok(NULL, " ");
    char* operation = word;
    word = strtok(NULL, " ");
    char* op2 = word;

    if (op1 == NULL || operation == NULL || op2 == NULL) {
        printf("Invalid input");
        return 1;
    }

    int num1 = atoi(op1);
    int num2 = atoi(op2);

    if (*operation == '+'){
        printf("%d", addition(num1, num2));
    }else if(*operation == '-'){
        printf("%d", subtraction(num1, num2));
    }else if(*operation == '/'){
        float res = division(num1, num2);
        if (res != -1.0f) {
            printf("%5f\n", res);
        }
    }else if(*operation == '*'){
        printf("%d", multiplication(num1, num2));
    }else{
        printf("Invalid operatot");
    }
}