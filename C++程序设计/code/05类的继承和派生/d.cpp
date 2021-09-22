#include <iostream>

using namespace std;

class A 
{
    public:
        int a;
};
class B:  public A {};

int main()
{
    B b;
    b.a = 10;
    A a = b;
    cout << a.a << endl;
}