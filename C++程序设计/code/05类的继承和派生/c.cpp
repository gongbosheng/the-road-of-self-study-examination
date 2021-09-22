#include <iostream>

using namespace std;

class A
{
    public:
        int a;
};

class B
{
    public:
        int b;
};

class C: public A, public B
{
    public:
        void getAB();
};

void C::getAB()
{
    a = 1;
    b = 2;
    cout << a << b << endl;
}

int main()
{
    C ss1;
    ss1.getAB();
}