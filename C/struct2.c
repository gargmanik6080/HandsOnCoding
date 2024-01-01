// Describe a struct student   std name,roll,class,sub_mark, total
// using studeent declaration as array arr with 30 elements 
// WAP in c to read info for all studs and display it

# include<stdio.h>
struct stud
{
    int roll;
    char name[20];
    int grp;
    int mark[5];
    int total;
}s[30];
int main(){
    printf("Roll No: ");
    scanf("%d", &s[0].roll);
    printf("Name: ");
    scanf("%s", s[0].name);
    printf("Group: ");
    scanf("%d", &s[0].grp);
    int sum=0;
    for(int i=0;i<5;i++){
        printf("marks: ");
        scanf("%d", &s[0].mark[i]);
        sum+=s[0].mark[i];
    }
    s[0].total=sum;

    printf("\nYour name is %s",s[0].name);
    printf("\nYour roll no. is %d",s[0].roll);
    printf("\nYour group is %d",s[0].grp);
    for(int i=0;i<5;i++){
        printf("\nYour marks is %d",s[0].mark[i]);
    }
    printf("\nYour total marks is %d\n",s[0].total);


}