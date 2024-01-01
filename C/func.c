#include<stdio.h>
#include<string.h>
int palin(int n){
    int m=n;
    int tmp=0;
    while(n>9){
        tmp*=10;
        tmp+= (n%10);
        n/=10;
    }
    tmp*=10;
    tmp+=n;
    if(tmp==m)return 1;
    return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    if(palin(n))printf("Palin");
    else printf("Nah!!");


}