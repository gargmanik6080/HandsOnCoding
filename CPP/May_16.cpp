//MULTI PATH
#include<iostream>
using namespace std;

class P1
{
    public:
    int a = 10;
    void fun1()
    {
        cout << "Parent 1\n";
        cout << a <<endl;
    }
};

class C1 : public P1
{
    public:
    int a = 5;
    int b = 20;
    void fun2()
    {
        cout << "Parent 2\n";
    }
};
class C2 : public P1
{
    public:
    int a = 30;
};

class G1 : public C1, public C2
{
    public:
    void fun2()
    {
        cout << "Grand Child\n";
    }
    //     void fun1()
    // {
    //     cout << "Parent 1\n";
    // }
};
int main()
{
    G1 obj;
    obj.fun1();  //For Ambiguity
    // obj.C2 :: fun1();

    // obj.fun1();
    // obj.fun2();
}
