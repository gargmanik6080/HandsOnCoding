#include <iostream>
using namespace std;
 
main()
{
    // int a[2][2] = {{1,2},{3,4}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    // }

    // int b[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //INPUT AND OUTPUT OF 3 D ARRAY
    // int c[2][3][2];
    // cout << "Enter Values";
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 2; k++)
    //         {
    //             // cout << b[i][j][k] << " ";
    // 	        cin >> c[i][j][k];
    //         }
    //     }
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 2; k++)
    //         {
    //             cout << c[i][j][k] << " ";
    // 	        // cin >> c[i][j][k];
    //         }
    //     }
    // }


    int a[7] = {1,2,3,4,5,6,7};
    cout << "The original array: ";
    int index;
    int ele;
    int len = (sizeof(a)/4);
    for (int i = 0; i < len; i++)
    {
        cout << a[i];
    }


    cout << "Enter index of element to replace: ";
    cin >> index;
    if (index < len)
    {
        
    }

}