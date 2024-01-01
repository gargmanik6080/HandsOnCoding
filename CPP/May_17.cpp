#include<iostream>
using namespace std;
#include<string>
// void fun()
// {
//     cout <<"hello";
// }
// int main()
// {
//     void (*ptr)() = fun;
//     ptr();
// }

//VIRTUAL FUNCTION
// class parent 
// {
//     public:
//     virtual void fun()
//     {
//         cout << "c++";
//     }
// };
// class child : public parent
// {
//     public:
//     void fun()
//     {
//         cout << "java";
//     }
// };
// int main()
// {
//     child obj;
//     parent *ptr;
//     ptr = &obj;
//     ptr->fun();
//     return 0;
// }

class data
{
    public:
    string name;
    int id;
    data(string x, int y)
    {
        name = x;
        id = y;
    }
    virtual void showdata()
    {
        cout <<  ("my name is "+ name + " and id is " ) << id;
    }
};
class emp1 : public data
{
    public:
    emp1(string x, int y)
    {
        name = x;
        id = y;
    }
    void showdata()
    {
        cout <<  ("my name is "+ name + " and id is " ) << id;
    }
};
class emp2 : public data
{
    public:
   
    emp2(string x, int y)
    {
        name = x;
        id = y;
    }
    void showdata()
    {
        cout <<  ("my name is "+ name + " and id is " ) << id;
    }
};

/*
void  display(data *ptr)
{
    ptr->showdata();
    // return 0;
}
*/
int main()
{
    // emp1 obj;
    // emp2 obj2;
    // data *ptr1;
    // data *ptr2;
    // ptr1 = &obj;
    // ptr2 = &obj2;

    // display(ptr1);
    // display(ptr2);
    data obj("man", 15);
    obj.showdata();
}