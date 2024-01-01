#include <iostream>
using namespace std;

class A
{
    private:
        int a = 5;
        int fun()
        {
            cout << "\nThis is inside the function!!!";
            return 0;
        }
    friend class B;

};

class B
{
    public:
    A obj2;
    int prt()
    {
        int c = obj2.a;
        cout << c*c;
        obj2.fun();
        return 0;
    }
};

int main()
{
    B obj;
    obj.prt();
}