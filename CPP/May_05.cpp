 #include <iostream>
 using namespace std;

// class person 
// {
//     public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }
//     int sq(int a)
//     {
//         return a*a;
//     }
//     void hello()
//     {
//         cout << "Hello";
//     }

// };

// int fun(int x, int y, person* obj, int(person::*ptr)(int,int))
// {
//     return (obj ->*ptr)(x,y);
// }
// int fun2(int x, person* obj, int(person::*ptr2)(int))
// {
//     return (obj ->*ptr2)(x);
// }
// void fun3(person* obj, void(person::*ptr3)())
// {
//     (obj ->*ptr3)();
// }

// int main()
// {
//     person p;
//     // person* ptr;
//     // ptr = &p;
//     cout << fun(2,1, &p, &person::add) << endl;
//     cout << fun2(5, &p, &person::sq) << endl;
//     fun3(&p, &person::hello);
// }


// class person 
// {
//     public:
//     int a = 20;
//     person (int a)
//     {
//         this ->a = a;
//         cout << a;
//     }
// };
// // int a = 10;
// int fun()
// {
//     int a = 5;
//     // this ->a //= a;
//     cout << (this ->a);
//     return 0;
// }

// int main ()
// {
//     person p(10);
//     cout << endl << p.a;
//     fun();
// }

class employee
{
    public:
    int s1[3];
    int s2[3];
    void in()
    {
        cout << "Salary for Emp 1\n";
        for(int i = 0; i <3; i++)
        {
            cin >> this ->s1[i];
        }
        cout << "Salary for Emp 2\n";
        for(int i = 0; i <3; i++)
        {
            cin >> this ->s2[i];
        }
    }
    int avg(int a[3])
    {
        int sum=0;
        for(int i = 0; i <3; i++)
        {
            sum += a[i];
        }
        return sum/3;
    }

    void cmp(int a, int b)
    {
        if (a > b)
        {
            cout << "Employee 1 has greater salary average...";
        }
        else if (b > a){
            cout << "Employee 2 has greater salary average...";
        }
        else 
        {
            cout << "Equal avg";
        }
    }

    void main1()
    {
        this ->in();
        int avg1 = this ->avg(s1);
        int avg2 = this ->avg(s2);
        // cout << avg1 << endl << avg2 << endl;
        this ->cmp(avg1, avg2);
        
    }

};

int main()
{
    employee emp;
    emp.main1();
}