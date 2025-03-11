#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main (void)
{
    pid_t result;
    char * ls_args[] = {
        "ls",
        "-l",
        "/",
        NULL
    };
    result = fork ();
    if (result == -1) {
        fprintf (stderr, "Fork error\n");
        return 1;
    }
    /* Child */
    if (result == 0) {
        execv ("/bin/ls", ls_args);
        fprintf (stderr, "Exec error\n");
        return 1;
    }
    /* Parent */
    return 0;
}