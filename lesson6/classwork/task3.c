#include <unistd.h>
#include <stdio.h>

int main(){
    fork();
    printf("Hello, World\n");
    sleep (15);
    return 0;
}