#include <iostream>

using namespace std;

// 虚基类

class A
{
    public:
        int a;
};


class B: virtual public A{};

class C: virtual public A{};

class D: public B, public C {};

int main()
{
    D a;
    a.a = 10;
    cout << a.a << endl;
}