 #include <iostream>
 using namespace std;

//SINGLE INHERTANCE
// class parent
// {
//     public:
//     int a = 10;
//     void fun()
//     {
//         cout<< "c++";
//         cout << a;
//     }
// };
// class child : public parent
// {
//     public:
//     void fun1()
//     {
//         cout << "Java";
//         cout << a;

//     }
// };
// int main()
// {
//     child obj;
//     obj.fun1();
//     obj.fun();
//     cout << obj.a;
//     return 0;
// }

// //MULTIPLE INHERTANCE
// class P1
// {
//     public:
//     int a = 10;
//     // int b = 25;
//     void fun1()
//     {
//         cout << "Parent 1\n";
//     }
// };
// class P2
// {
//     public:
//     int b = 20;
//     void fun2()
//     {
//         cout << "Parent 2\n";
//     }
// };

// class C : public P1, public P2
// {
//     public:
//     int a = 20;
//     void fun()
//     {
//         cout << "Sum is: " << (a + b);
//     }
// };
// int main()
// {
//     C obj;
//     obj.fun1();
//     obj.fun2();
//     obj.fun();
    
// }


//MULTILEVEL

// class P1
// {
//     public:
//     int a = 10;
//     // int b = 25;
//     void fun1()
//     {
//         cout << "Parent 1\n";
//     }
// };
// class C1P2 : public P1
// {
//     public:
//     int b = 20;
//     void fun2()
//     {
//         cout << "Parent 2\n";
//         cout << "Value of a square is :" << a*a<< endl;
//     }
// };

// class C2 : public C1P2
// {
//     public:
//     int a = 20;
//     void fun()
//     {
//         cout << "Sum is: " << (a + b);
//     }
// };
// int main()
// {
//     C2 obj;
//     obj.fun1();
//     obj.fun2();
//     obj.fun();
    
// }



//HEIRARICHAL

// class P1
// {
//     public:
//     int a = 10;
//     // int b = 25;
//     void fun1()
//     {
//         cout << "Parent 1\n";
//     }
// };

// class C1 : public P1
// {
//     public:
//     int b = 20;
//     void fun2()
//     {
//         cout << "Parent 2\n";
//     }
// };
// class C2 : public P1
// {
//     public:
//     int c = 30;
// };
// class G1 : public C1
// {
//     public:

// };
// class G2 : public C1
// {
//     public:
//     int e = 30;
// };
// class G3 : public C2
// {
//     public:
//     int f = 30;
// };
// //

// int main()
// {
//     G1 obj;
//     obj.fun1();
//     G3 obj1;
//     obj1.fun1();
    
// }


//HYBRID

/*
class P1
{
    public:
    int a = 10;
    // int b = 25;
    void fun1()
    {
        cout << "Parent 1\n";
    }
};
class P2
{
    public:
    void fun2()
    {
        cout << "Parent 2\n";
    }
};

class C1 : public P1
{
    public:
    int b = 20;
    void fun2()
    {
        cout << "Parent 2\n";
    }
};
class C2 : public P1, public P2
{
    public:
    int c = 30;
};


int main()
{
    cout << "First Child:\n";
    C1 obj;
    obj.fun1();
    C2 obj1;
    cout << "Second child: \n";
    obj1.fun1();
    obj1.fun2();

}
*/


//MULTI PATH

/*
class P1
{
    public:
    int a = 10;
    void fun1()
    {
        cout << "Parent 1\n";
        cout << a <<endl;
    }
};

class C1 : public P1
{
    public:
    int a = 5;
    int b = 20;
    void fun2()
    {
        cout << "Parent 2\n";
    }
};
class C2 : public P1
{
    public:
    int a = 30;
};

class G1 : public C1, public C2
{
    public:
    void fun2()
    {
        cout << "Grand Child\n";
    }
};
int main()
{
    G1 obj;
    obj.C1 :: fun1();  //For Ambiguity
    obj.C2 :: fun1();

    // obj.fun1();
    // obj.fun2();
}
*/


class P1
{
    public:
    P1()
    {
        cout<< "Cons of Parent\n";
    }
    ~P1()
    {
        cout << "Decon of Parent\n";
    }
    
};
class C2 : public P1
{
    public:
    C2()
    {
        cout<< "Cons of Child 2\n";
    }
    ~C2()
    {
        cout << "Decon of Child 2\n";
    }

};
class C1 : public P1
{
    public:
    C1()
    {
        cout<< "Cons of Child\n";
    }
    ~C1()
    {
        cout << "Decon of Child\n";
    }

};

class G1 : public C2, public C1
{
    public:
    G1()
    {
        cout<< "Cons of GC\n";
    }
    ~G1()
    {
        cout << "Decon of GC\n";
    }

};
int main()
{
    G1 obj;

}
