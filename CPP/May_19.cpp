#include<iostream>
using namespace std;

//VIRTUAL DESTRUCTOR

class parent
{
    public:
    parent()
    {
        cout << "C++\n";
    }
    // virtual ~parent()
    ~parent()
    {
        cout << "hello\n";
    }
};
class child : public parent
{
    public:
    child()
    {
        cout <<"Java\n";
    }
    ~child()
    {
        cout << "bye\n";
    }
};

int main()
{
    child *ptr = new child();
    parent *ptr1;
    ptr1 = ptr;
    delete ptr1;
}



//EXCEPTION HANDLING 
//TRY THROW CATCH
/*
int main()
{
    int a;
    cin>>a;
    cout <<"Before Try\n";
    try{
        cout << "Inside Try\n";
        if (a < 5)
        {
            throw a;
        }
    }
    catch (int x)
    {
        cout << "No. smaller than 5...";
    }
}*/