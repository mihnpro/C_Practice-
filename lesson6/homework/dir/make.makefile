execve2: execve2.c
    gcc -o $@ execve2.c

newprog: newprog.c
    gcc -o $@ $^

clean:
    rm -f newprog execve2
