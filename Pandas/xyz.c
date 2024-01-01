#include<stdio.h>
#include<stdlib.h>
// int main()
// {
// FILE *fp;
// char str[30];
// char ch;
// fp=fopen("abc.txt","r+");
// if(fp==NULL)
// {
// printf("error");
// exit(1);
// }
// fseek(fp,6,SEEK_SET);
// while(!feof(fp))
// {
// ch=fgetc(fp);
// printf("%c",ch);
// }
// rewind(fp);
// while(!feof(fp))
// {
// ch=fgetc(fp);
// printf("%c",ch);
// }
// printf("\n");
// fclose(fp);
// }
/*
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("abc.txt","a+");
    if(fp==NULL)
    {
        printf("file not exist");
        exit(1);
    }
    fputs("programming",fp);
    rewind(fp);
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}*/


/////   for( c=getc(fp); c!= EOF; c=getc(fp))

/*
int main()
{
    FILE *fp;
    int count = 1; // Line counter (result)
    char c; // To store a character read from file
 
 
    // Open the file
    fp = fopen("C:\\Users\\mps23\\OneDrive\\Desktop\\New Text Document (3).txt", "r");
 
    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }*/