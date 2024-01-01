#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void show_list(list <int>l1)
{
    list<int> :: iterator i;
    cout << endl;
    for(i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
}
int main()
{
    list<int>l1;
    for (int i= 0; i < 11; i++)
    {
        l1.push_front(i);
    }
    show_list(l1);
    cout << "\n" << l1.back();
    l1.pop_front();
    show_list(l1);
    cout << endl << l1.empty();
    l1.sort();
    show_list(l1);
    l1.reverse();
    show_list(l1);


}