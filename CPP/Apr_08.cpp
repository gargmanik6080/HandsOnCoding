#include<iostream>
using namespace std;

// int fun(int x)
// {
//     x = 1000;
//     cout << x << endl;
//     return 0;
// }

inline int swap_fun(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}



int main()
{
    // int x = 10;
    // fun(x);
    // cout << x;

    int a = 10;
    int b = 20;

    int& c = a;
    int& d = b;
    swap_fun(&c, &d);
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b;

    return 0;
}