#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    /**
    int a,b;
    char z;
    printf("Enter statement to calculate with spaces- ");
    scanf("%d %c %d", &a,&z,&b);
    // printf("%d %c %d", a,z,b);
    if(z=='+')printf("%d\n", a+b);
    else if(z=='-')printf("%d\n", a-b);
    else if(z=='*')printf("%d\n", a*b);
    else if(z=='/')printf("%d\n", a/b);
    else if(z=='%')printf("%d\n", a%b);
    else printf('Invalid input');*/
    /*
    int sum = 0;
    int i;
hi:
    scanf("%d", &i);
    sum += i;
    if (sum < 0)
    {
        printf("sum: %d\n", sum);
    }
    else
        goto hi;*/
/*
char c;
scanf("%c", &c);
switch(c){
    case('a'):
    case('A'):
    case('e'):
    case('E'):
    case('i'):
    case('I'):
    case('o'):
    case('O'):
    case('u'):
    case('U'):
        printf("It is Vowel");
        break;
    default:
    printf("It is Consonent");
}*/
/*
int a=54;
switch(a){
    case 81 ... 90:printf("A\n");break;
    case 71 ... 80:printf("B\n");break;
    case 61 ... 70:printf("C\n");break;
    case 51 ... 60:printf("D\n");break;
    case 41 ... 50:printf("E\n");break;
    break;
    default:
    printf("F");
}*/
/*
int n,rem,sum=0;
printf("enter a no.- ");
scanf("%d", &n);

hi1:
if(n!=0){
    rem = n%10;
    n=n/10;
    sum+=0;
    goto hi1;
}
else{
    if(sum>10){

    }
}*/

/*
//Number of Notes required
int n,sum=0;
printf("enter a no.- ");
scanf("%d", &n);

int tmp;
if(n>=500){
    tmp= n/500;      // 725  tmp=1
    n = n-tmp*500;   // 225
    sum+= tmp;}
    printf("500 - %d\n", tmp);
tmp=0;
if(n>=100){
    tmp= n/100;
    n = n-tmp*100;
    sum+= tmp;}
    printf("100 - %d\n", tmp);
    tmp=0;

if(n>=50){
    tmp= n/50;
    n = n-tmp*50;
    sum+= tmp;}
    printf("50 - %d\n", tmp);
    tmp=0;

if(n>=20){
    tmp= n/20;
    n = n-tmp*20;
    sum+= tmp;}
    printf("20 - %d\n", tmp);
tmp=0;


if(n>=10){
    tmp= n/10;
    n = n-tmp*10;
    sum+= tmp;}
    printf("10 - %d\n", tmp);
tmp=0;


if(n>=5){
    tmp= n/5;
    n = n-tmp*5;
    sum+= tmp;}
    printf("5 - %d\n", tmp);
tmp=0;

if(n>=1){
    tmp= n/1;
    n = n-tmp*1;
    sum+= tmp;}
    printf("1 - %d\n", tmp);
printf("No of req notes- %d\n", sum);*/


//QUADRANT CHECK 
/*
int n1,n2;
printf("enter a no.- ");
scanf("%d", &n1);
printf("enter other no.- ");
scanf("%d", &n2);
if(n1==0 && n2==0)printf("Origin \n");
else if(n1>0 && n2>0)printf("First Quadrant\n");
else if(n1<0 && n2<0)printf("3rd Quadrant\n");
else if(n1>0 && n2<0)printf("4th Quadrant\n");
else if(n1<0 && n2>0)printf("2nd Quadrant\n");
else printf("On axis\n");*/

//TRIANGLE AREA
/*
int n1,n2;
printf("enter BASE.- ");
scanf("%d", &n1);
printf("enter HEIGHT.- ");
scanf("%d", &n2);
int m1,m2; 
printf("enter BASE.- ");
scanf("%d", &m1);
printf("enter HEIGHT.- ");
scanf("%d", &m2);

int a1=(n1*n2)/2;
printf("Area 1- %d\n", a1);
if(a1>(m1*m2)/2)printf("A1 is greater\n");
else printf("A2 is greater\n");

*/

// NUMBER OF YEAR DAY...
/*
int n,sum=0;
printf("enter a no.- ");
scanf("%d", &n);

int tmp;
if(n>=365){
    tmp= n/365;
    n = n-tmp*365;
    sum+= tmp;}
    printf("YEAR - %d\n", tmp);
tmp=0;
if(n>=30){
    tmp= n/30;
    n = n-tmp*30;
    sum+= tmp;}
    printf("MONTH - %d\n", tmp);
    tmp=0;

if(n>=7){
    tmp= n/7;
    n = n-tmp*7;
    sum+= tmp;}
    printf("WEEK - %d\n", tmp);

printf("No of DAYS- %d\n", n);
*/

}