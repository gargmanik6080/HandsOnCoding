#include <iostream>
using namespace std;
// class P
// {
//     int a;
//     public:
//     P()
//     {
//         a = 5;
//     }

//     void operator ++()
//     {
//         a = a +100;
//     }
//     void display()
//     {
//         cout << a;
//     }
// };
// int main()
// {
//     P obj;
//     obj ++;
//     obj.display();
// }


//  !a

class P
{
    int a;
    public:
    P()
    {
        a = 10;
    }

    void  operator !()
    {
        a = a * 5;
    }
    void display()
    {
        cout << a;
    }
};
int main()
{
    P obj;
    ! obj;
    obj.display();
}