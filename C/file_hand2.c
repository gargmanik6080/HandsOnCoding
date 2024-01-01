#include <stdio.h>
#include<stdlib.h>
int main()
{
  char ch;
  FILE *fp;
  fp=fopen("file.txt","r");
  if(fp==NULL)
  {
      printf("file not found");
      exit(1);
  }

 ch=fgetc(fp);
 while(!feof(fp))
 {
     printf("%c",ch);
     ch=fgetc(fp);
 }
 fclose(fp);
    return 0;
}

/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    FILE *fp;
    char s[100];
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    printf("enter string");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);
    }
    fclose(fp);
    return 0;
}*/