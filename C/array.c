#include<stdio.h>
int main(){
    int a[10]= {55,66,77,88,99,52,11};
    // for(int i=0;i<5;++i){
    //     printf("%d   %d\n", i+1, arr[i]);
    // }
    /*
    int m=a[0];
    int b=a[0];
    for(int i=0;i<5;++i){
        if(m>a[i])m=a[i];
        if(b<a[i])b=a[i];
    }
    printf("%d %d ", m, b);*/

    //DELETE BY INDEX
    /*
    int n;
    scanf("%d", &n);
    for(int i=n-1;i<9;++i){
        a[i]= a[i+1];

    }
    a[9]=0;
    for(int i=0;i<10;++i)printf("%d ", a[i]);*/
/*
int a2[10];

for(int i=0;i<10;++i){
    int j=0;
    for(j;j<10 && a2[j]!=0;++j){
        
    }
}*/


/// 2D array
// int m,n;
// scanf("%d %d", &m, &n);
// int arr[m][n];
// int sum[m];
// for(int i=0;i<m;++i){
//     for(int j=0;j<n;++j){
//         scanf("%d", &arr[i][j]);
//     }
// }

// for(int i=0;i<m;++i){
//     int s=0;
//     for(int j=0;j<n;++j){
//         printf("%d ", arr[i][j]);
//         s+=arr[i][j];
//     }
//     printf("\n");
//     sum[i]=s;
// }
// for(int i=0;i<m;++i){
//     printf("---%d row's sum is %d\n", i,sum[i]);
// }

int x,n;
scanf("%d ", &n);
int arr[n][n];
x=(n*n)/2;
for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
        scanf("%d", &arr[i][j]);
    }
    printf("\n");
}
int s=0;
for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
        printf("%d ", arr[i][j]);
        if(arr[i][j]==0)s++;
    }
    printf("\n");
    
}
    if(s>x)printf("Sparse Mat...\n");
    else printf("Not Sparse Mat...\n");



}