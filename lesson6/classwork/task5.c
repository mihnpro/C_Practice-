#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    pid_t res = fork();
    if (res == -1) {
        fprintf(stderr, "fork failed\n");
        return 1;
    }
    if (res == 0) {
        printf("Child with Pid = %d\n", getpid());
    }else{
        printf("Parent with Pid = %d\n", getpid());
    }
    return 0;
}