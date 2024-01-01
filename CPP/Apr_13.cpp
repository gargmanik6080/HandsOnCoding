#include <iostream>
using namespace std;

// class Person
// {
//     public:
//     Person()
//     {
//         cout << "hello";
//     }
//     ~Person()
//     {
//         cout << " Bye";
//     }
// };
// void fun()
// {
//     Person p1;
// }
// int main()
// {
//     fun();
//     cout << " c++";
// }

int main()
{
    for (int i = 0; i < 3; i++)
    {
        static int a = 1;
        a = a + 3;
        cout << a;
        a++;
    }
}

////    func in class
///     multiple obj
////    count of how many times the function is called irrespective of diff obj