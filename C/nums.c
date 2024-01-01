#include<stdio.h>
#include<math.h>
int main(){
    int i,z;
    printf("Enter start no.- ");
    scanf("%d", &i);
    printf("Enter end no.- ");
    scanf("%d", &z);
    // Armstrong no
    for(int m=i;m<z;m++){
        int x=m;
        int c=0;
        while(x!=0){
            c++;x=x/10;
        }
        int sum=0,tmp;
        int n=m;
        while(n!=0){
            tmp=n%10;
            tmp = pow(tmp,c);
            sum= sum+tmp;
            n=n/10;
        }
        if(m==sum)printf("%d Is Armstrong\n", sum);
    }
}