#include<iostream>
#include<deque>
#include<iterator>
using namespace std;


void show_list(deque <int>l1)
{
    deque<int> :: iterator i;
    cout << endl;
    for(i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
}
int main()
{
    deque<int>l1;
    for (int i= 0; i < 11; i++)
    {
        l1.push_front(i);
    }
    show_list(l1);
    cout << "\n" << l1.back();
    l1.pop_front();
    show_list(l1);
    cout << endl << l1.empty();
    // l1.sort();
    // show_list(l1);
    // l1.reverse();
    // show_list(l1);
    // cout << l1.max_size()<< endl;
    cout << endl << l1.size()<< endl<< l1.at(3);

}