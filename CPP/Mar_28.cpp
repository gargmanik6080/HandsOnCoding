#include <iostream>
using namespace std;
main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr;
    ptr = arr;
    cout << ptr << "\n\n\n";


    for (int i = 4; i > -1; i--)
    {
        cout << &arr[i] << " " << arr[i] << "\n" ;
    }


    cout << ptr[0] << *ptr;

}