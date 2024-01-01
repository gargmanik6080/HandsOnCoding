#include <stdlib.h>
#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("file.txt", "a");
    fprintf(fptr, "%d\nHell\n", 21);
    fclose(fptr);

    fptr=fopen("file.txt", "r");
    char print[150];
    fscanf(fptr,"%s", print);
    printf("\n%s\n", print);
    fclose(fptr);
    return 0;
}   
