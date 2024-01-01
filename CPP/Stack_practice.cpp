#include<iostream>
using namespace std;
int main()
{
    //STACK CREATION
    int a[15] ;
    cout << "Enter no. of element to be added in the Stack: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at "<< i << " index: ";
        cin >> a[i];
    }

    
    while(true)
    {
    int x;
    cout << "Choose what you want to do with the stack...\n";
    cout << "1. Push \t2. Display the last element \t3. Display the Stack \t4. Quit\n";
    cin >> x;

    if (x == 4)
    {
        break;
    }

    else if(x == 1)
    {
        int y;
        cout << "Enter Element to be pushed: ";
        cin >> y;

        a[n] = y;
        n = n+1;
    }
    else if(x == 2)
    {
        cout << "Last Element is: "<< a[n-1]<<endl;
    }
    else if(x == 3)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i]<<endl;
        }

    }
    }
}