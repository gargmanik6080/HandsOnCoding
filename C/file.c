#include<stdio.h>
int main(){
    // int n;
    // scanf("%d", &n);
    /*
    int a=100,b=55,c=54;

    switch(a>b && a>c){
        case 1:printf("A is largest...\n");break;
        case 0: 
            switch (b>c && b>a )
            {
            case 1:
                printf("B is largest...\n");
                break;
            
            default:
                printf("C is largest...\n");
                break;
            }
            break;
    }
*/

    //C TO F
    /*
    int c;
    printf("enter temp in F: ");
    scanf("%d", &c);
    printf("Celsius value is: %d", ((c-32)*5)/9);*/

    //TRIANGLE
    /*int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c)printf("Equi");
    else if(a==b || b==c || a==c)printf("Iso");
    else printf("scalene");*/

    //Attendance
    int c,a;
    char y;
    scanf("%d %d %c", &c, &a, &y);
    if((a*100)/c >=75)printf("Eligible");
    else {
        if(y=='y' || y=='Y')printf("Eligible");
        else printf("Nah\n");
    }
    
}