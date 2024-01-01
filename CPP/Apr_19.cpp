#include <iostream>
using namespace std;

// class A
// {
//     public:
//         int fun()
//         {
//             cout << "This is inside the function fun!!!";
//             return 0;
//         }

// };

// int fun2(A obj)
// {
//     return obj.fun();
// }
// int main()
// {
//     A obj;
//     fun2(obj);
// }

class A 
{
    public:
    int a = 5;

};
A fun(A obj)
{
    obj.a = 10;
    return obj;
};

int main()
{
    // int a = 5;
    A obj;
    A obj2 = fun(obj);
    cout << obj2.a;
}