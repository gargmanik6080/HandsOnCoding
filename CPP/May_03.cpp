 #include <iostream>
 using namespace std;

class person 
{
    public:
    int a = 150;
    int b = 1;
    int c = 445;
    void sq(int b)
    {
        cout  << a*b;
    }
    
};

int main()
{
    //  int* ptr;
    //  ptr = new int(10);
    //  cout << *ptr;
    //  delete ptr;
    //  cout << *ptr;
    // int* ptr1 = ptr;
    // cout<< *ptr << endl << *ptr1 << endl << ptr << endl;
    // delete ptr;
    // cout<< *ptr << endl << *ptr1;

    // int *ptr = new int[3];
    // ptr[0] = 10;
    // ptr[1] = 11;
    // ptr[2] = 12;
    // cout << *(ptr + 1)<< endl;
    // delete ptr;
    // cout << *ptr;

    // person* ptr;
    // person p;
    // ptr = &p;

    // ptr->sq(22);
    // return 0;

    person p1;
    person p2;
    person p3;
    p1.a = 10;
    p2.a = 15;
    p3.a = 20;
    // person arr[3] = {p1,p2,p3};

    // person* ptr ;
    // ptr = &arr[3];
    person* ptr = new person[3];
    ptr[0] = p1;
    ptr[1] = p2;
    ptr[2] = p3;

    cout << ptr[0].a << endl;
    cout << ptr[1].a << endl;
    cout << ptr[2].a << endl;

 }