#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*
    vector<int> v;
    v.assign(3,5);
    v.push_back(15);
    v.pop_back();
    v.insert(v.begin(), 15);
    v.erase(v.begin());
    v.clear();
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i]<< " ";
    }
    */
    vector<int> v1;
    vector<int> v2;
    v1.push_back(10);
    v1.push_back(11);
    v2.push_back(12);
    v2.push_back(13);

    v1.swap(v2);
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i]<< " ";
    }
    cout << endl;
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i]<< " ";
    }
}