#include<iostream>
using namespace std;
// #include<iostream>

// int main()
// {
//     std::cout << "Hello World" << std::endl;
// }


// using namespace std;
// #include <iostream>


// class Sum{
//     public:
//         int a, b, c;
//         void sum(int x, int y){
//             a = x;
//             b = y;
//             c = a + b;
//             cout<<c;
//         }
// };

// int main()
// {
//     Sum obj;
//     obj.sum(10, 20);
//     // return 0;
// }




// int main(){
//     int a = 5;
//     int b = 6;
//     cout<< ++a+a+++--b+b-- <<"\n";
//     a = 7;
//     if (a<5)
//         cout<< "Hello";
//         cout<< "C++"; //NOT INCLUDED IN IF



// }
class abc
{

    void show1()
    {
        cout << "Hi";
    }
    public:
        static int a ;

        void show2()
        {
            a = 5;
            cout << "Bye";
            show1();
        }
};



int abc::a = 10;

int main(){
//     int a = 5;
//     int b = 6;
//     a = 4;
//     if (++a<6)
//     {
//         cout<< "Hello ";
//     }
//     else if (a++<7){
//         cout<< "C++"; //NOT INCLUDED IN IF
//     }

    // int a;
    // double d;
    // char c;
    // cin >> a >> d >> c;
    // cout << a << d << c << endl;
    abc a1;
    // a1.show1();
    a1.show2();
    cout << a1;
    return 0;
}