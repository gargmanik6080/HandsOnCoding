#include <iostream>
using namespace std;

class person
{

    public: 
        static int a;
        void hello()
        {
            cout << "Hello!!! ";
            a++ ;
        }
        
};

int person::a;

int main()
{
    person obj1;
    person obj2;
    person obj3;
    person obj4;
    person obj5;
    obj1.hello();
    obj2.hello();
    obj3.hello();
    obj4.hello();
    obj5.hello();

    cout << "\nThe function was called " << person::a << " times";
    return 0;
}
