#include<stdio.h>
#pragma pack(1)

/*
struct car{
    char *engine;
}car1,car2;

int main(){
    car1.engine = "DD";
    car2.engine = "V8";
    printf("%s\n%s\n", car1.engine, car2.engine);
}*/

/*
struct emp{
    char *name;
    int age;
    int power;
    // this->power=100;
};
int mana(){
    struct emp mana;
    mana.age=27;
    if(mana.age>30)mana.power=650;
    else mana.power=550;
    return mana.power;
}
int main(){
    struct emp e1,e2;
    printf("%d\n", mana());
    printf("%d\n", e1.power);
}*/

//WAP to create student details
/*
struct stud{
    char name[20];
    int roll;
    int group;
    char add[20];
    int mob;

};
struct stud fun(struct stud r){
    *r.name="545";
    r.roll=544;
    return r;
}
int main(){
    struct stud s1;
    s1=fun(s1);
    /*
    printf("Enter Student Name: ");
    scanf("%s", s1.name);

    printf("Enter Student Roll no: ");
    scanf("%d", &s1.roll);
    printf("Enter Student Address: ");
    scanf("%s", s1.add);
    printf("Enter Student Group No: ");
    scanf("%d", &s1.group);
    printf("Enter Student Mobile no: ");
    scanf("%d", &s1.mob);


    printf("\nStudent Name: %s", s1.name);
    printf("\nStudent Roll No: %d", s1.roll);
    // printf("\nStudent Address: %s", s1.add);
    // printf("\nStudent Group No: %d", s1.group);
    // printf("\nStudent Mobile no: %d/n", s1.mob);
    
}
*/

struct store{
    double price;
    union {
        struct{
            char *title;
            char *author;
            int n;
        } book;
        struct {
            int c;
            int s;
            char *d;
        }shirt;
    }item;
};
void main(){
    struct store str;
    printf("%ld\n", sizeof(str));
}
void main(){
    struct store str;
    
    printf("%ld\n", sizeof(str));
}