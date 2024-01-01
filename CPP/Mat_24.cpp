#include<iostream>
using namespace std;
/*
int main()
{
    int n;
    cin >> n;

    try{
        int* ptr;
        ptr = &n;
        
        try{
            int x = 5;
            if (x == 5)
            {
                throw (x);
            }
        }
        catch (int x)
        {
            cout << "The nested catch is working...";
        }
        if (n<5)
        {
            throw (ptr);
        }
    }
    catch (int* ptr)
    {
        cout << "This is working and value of a is "<< *ptr;
    }
}*/

//THROWING OBJ

class A
{
    public:
    A()
    {
        cout << "hi\n";
    }
};
class B :public A
{
    public:
    B()
    {
        cout << "Const of B\n";
    }
};
int main()
{
    try{
        int n = 5;
        B obj;
        throw (obj);
    }
    catch(A obj)
    {
        cout << "The obj was caught by A";
    }    
    catch(B obj)
    {
        cout << "The obj was caught by B";
    }
}

//CATCH BLOCK
/*
int main()
{
    char a = 'z';
    try{
        throw a;
    }
    catch(int a )
    {
        cout << "hi";
    }
    catch (...)
    {
        cout << "Hello";
        cout << a ;
    }

}*/