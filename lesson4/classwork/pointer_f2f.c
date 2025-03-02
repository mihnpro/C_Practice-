#include <stdio.h>

void printHello(){
    printf("Hello world");
}

void executeFunction(void (*func)()){
    func();
}

int main(){
    executeFunction(printHello);
}
