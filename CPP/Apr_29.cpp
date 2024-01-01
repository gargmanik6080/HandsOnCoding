 #include <iostream>
 #include<String>
 using namespace std;

// class employee
// {
//     int mnth;
//     public:
//     employee(int x)
//     {
//         mnth = x;
//     }
//     operator int()
//     {
//         return (mnth*12);
//     }
// };
// class emp
// {
//     int x;
//     public:
//     emp(int x1)
//     {
//         x = x1;
//     }
//     operator int()
//     {
//         return (x + 5);
//     }
// };

// int main()
// {
//     int e1, z;


//     employee e(2);
//     emp f(20);


//     (int) e;
//     e1 = e;
//     (int) f;
//     z = f;
//     // cout<<typeid(e).name()<<endl;
//     // cout<<typeid(e1).name();
    
//     // cout << "Months: " << e;
//     cout<< e1<< endl <<z;
//     return 0;
// }

class par
{
    int key = 1258784;
    public:
    // string key = "Password";
    // key;
    void check(int x)
    {
        if (x == key)
        {
            cout << "The password is correct...";
        }
        else{
            cout << "Invalid Password";
        }
    }
};
class child : private par
{
    public:
    operator *(int x)
    {
        check(x);
    }
};
int main()
{
    int key;
    cout << "Enter Password: ";
    cin >> key;
    child ch(key);

}