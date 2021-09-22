#include <iostream>

using namespace std;

class B;

class A
{
    public:
        int a;
        void f(B b);
};

class B
{
    public:
        int b;
        void f(A a);
};

void A::f(B b)
{
    cout << b.b << endl;
}

void B::f(A a)
{
    cout << a.a << endl;
}

int main()
{
    A a;
    B b;
    a.a = 1;
    b.b = 2;
    a.f(b);
    b.f(a);
}