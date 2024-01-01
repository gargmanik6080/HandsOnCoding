#include<stdio.h>
// void swap(int *a, int *b){
//     int t=*a;
//     *a=*b;
//     *b=t;
// }

/*
void factorial(int *n){
    for(int i=*n-1;i>1;i--){
        *n= *n * i;
    }
}*/
int fac(int n){
    if(n==1)return 1;
    return n*fac(n-1);
}

int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return fib(n-1)+fib(n-2);
}

void main(){
    // int a,b;
    // scanf("%d %d", &a, &b);
    // swap(&a,&b);

    int n=5;
    // int x=fac(n);
    int x=fib(n);
    printf("%d\n", x);
}