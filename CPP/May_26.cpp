//FUNCTION TEMPLATE

#include<iostream>
using namespace std;

/*
template <typename a, typename b>
a add(a num1, b num2)
{
    return (num1 + num2);
}
int main()
{
    cout << add<float, int>(10.1,20.54);
}*/

//CLASS TEMPLATE
template<class T>
// template<typename ty>
class number
{
    private:
    T a;
    public:
    number(T x)
    {
        a = x;
    }
    void fun()
    {
        cout << a;
    }
    T ret()
    {
        return a;
    }
};

int main()
{
    number<string>obj("5");
    obj.fun();
    cout << obj.ret();
}
