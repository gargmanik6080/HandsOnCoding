#include <iostream>
using namespace std;


/*/
class person 
{
    public:
    person(int a)
    {
        cout << "Hello " << a;
    }
    // void bye()
    // {
    //     cout << "bye";
    // }
};
*/
/*
class person 
{
    public:
    int a;
    person()
    {
    a = 10;
    }
    person(person &b)
    {
        int y = b.a;
        cout << a;
    }
};
*/

class abc
{
    public:
    static int a = 10;


    // abc()
    // {
    //     // a = 20;
    //     cout << a;
    // }
};

int main()
{
    // person p1(10);
    // p1.bye();

    // person obj;
    // person obj1(obj);

    abc a1;
    a1.a = 20;
    cout << a1.a;
    return 0;
}