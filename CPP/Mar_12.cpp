#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cout << "Enter a no.:";
    // cin >> n;


    // for (int i=0; i < n/2+1; i++)
    // {
    // for (int j = 0; j <= i; j++)
    // {
    //     cout << "* ";
    //     }
    // cout << "\n";
    // }
    // for (int i = int(n/2+1); i < n; i++)
    // {
    //     for (int j = 0; j< n -i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "\n";
    // }

    // return 0;


    int n;
    int x = 2;
    cout << "Enter a no.:";
    cin >> n;
    char a[100] = "*";

    for (int i=0; i < n/2+1; i++)
    {
        for (int z = 0; z<x; z++)
        {
            cout << "*" ;
        }
        cout << "\n";
        x = x * 2;
    }

    x = x/ 4;
    for (int i=1; i < n - n/2+1; i++)
    {

        for (int z = 0; z<x; z++)
        {
            cout << "*" ;
        }
        cout << "\n";
        x = x / 2;
    }
    return 0;
}