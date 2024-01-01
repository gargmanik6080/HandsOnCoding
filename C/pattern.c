#include<stdio.h>
int main(){
    //PYRAMID
    /*
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }*/
/*
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
}*/

    
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("#");
        }
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        for(int k=1;k<i+1;k++)printf("*");
        for(int k=0;k<n-i;k++)printf("#");
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("#");
        }
        for(int j=0;j<n-i;j++){
            printf("*");
        }
        for(int k=1;k<n-i;k++)printf("*");
        for(int k=0;k<i+1;k++)printf("#");
        printf("\n");
    }
    
}