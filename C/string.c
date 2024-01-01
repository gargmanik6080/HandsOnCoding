#include<stdio.h>
void rev(char* c,int i, int n){
    // printf("%d %d ", i,n);
    if(i>n-i)return ;
    char z=*(c+i);
    *(c+i)=*(c+n-i);
    *(c+n-i)=z;
    rev(c,i+1,n);
}
int main(){
    char s[]="asdfghjkl";
    int n=sizeof(s);
    rev(s, 0,n-2);
    printf("%s\n", s);
}