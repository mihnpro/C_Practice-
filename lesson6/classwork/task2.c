#include <stdlib.h>
#include <stdio.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
    int uid = getuid();
    struct passwd *pw = getpwuid(uid);
    if (pw == NULL){
        fprintf(stderr, "getpwuid failed\n");
        return 1;
    }
    printf("PID: %d\n", getpid());
    printf("PPID: %d\n", uid);
    printf("UID: %s\n", pw->pw_name); 
    printf("User: %s\n", pw->pw_gecos);
    return 0;
}