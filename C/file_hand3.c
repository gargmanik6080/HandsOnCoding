#include<stdio.h>
#include<stdlib.h>


// WRITE EVEN, ODD N PRIME NUMBERS IN A RANGE IN SEPARATE FILES
/*
int isprime(int x){
    int n=1;
    for(int i=2;i<x;i++){
        if(x%i==0){
            n=0;
            break;
        }
    }
    return n;
}
int main(){
    int x,y;
    printf("Enter the starting range... ");
    scanf("%d", &x);
    printf("Enter the ending range... ");
    scanf("%d", &y);

    for(x;x<=y;x++){
        if(x%2==0){
            FILE *ptr;
            ptr=fopen("even.txt", "a");
            fprintf(ptr, "%d ", x);
            fclose(ptr);
        }
        else {
            FILE *ptr;
            ptr=fopen("odd.txt", "a");
            fprintf(ptr, "%d ", x);
            fclose(ptr);
        }
        if(isprime(x)==1){
            FILE *ptr;
            ptr=fopen("prime.txt", "a");
            fprintf(ptr, "%d ", x);
            fclose(ptr);
        }
    }
    return 0;
}*/

// COPY CONTENT OF TWO FILE IN 3RD
/*
int main(){
    FILE *ptr1;
    FILE *ptr2;
    FILE *ptr3;
    ptr1 = fopen("file.txt", "r");
    ptr2 = fopen("file1.txt", "r");
    ptr3 = fopen("file2.txt", "a+");
    char c1;
    char c2;
    while((c1=fgetc(ptr1))!=EOF){
        fputc(c1, ptr3);
    }
    while((c2=fgetc(ptr2))!=EOF){
        fputc(c2, ptr3);
    }
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptr3);
}*/

int main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("file2.txt", "r");
    ptr2 = fopen("file2.txt", "r");
    char c1,c2;
    int x=1;
    while((c1=fgetc(ptr1))!=EOF){
        if((c2=fgetc(ptr2))==EOF){
            x=0;
            break;
        }
        // printf("%c", c2);
        if(c1!=c2){
            x=0;
            break;
        }
    }
    if(c2!=EOF) x=0;

    if(x==0)printf("Not equal...\n");
    else printf("Equal...\n");
}