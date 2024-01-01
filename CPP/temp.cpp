#include<iostream>
using namespace std;
/*
class Demo1 {
private:
int a;
public:
Demo1() { a = 5; }
friend class Demo2; // Friend Class
};
class Demo2 {
private:
int b;
public:
void showA(Demo1& x)
{
    std::cout <<x.a;
}
};
int main()
{
   Demo1 a;
   Demo2 b;
   b.showA(a);
   return 0;
 }    */

 int main()
 {
   string a =" jkbcybdybcd";
   string b;
   b = a.substr(0,5);
   cout << b;
 }