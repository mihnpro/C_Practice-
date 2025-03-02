#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    char original[200];
    fgets(original, sizeof(original), stdin);
    char *copy = strdup(original);
    printf("Original: %s", original);
    printf("Copy: %s", copy);
}