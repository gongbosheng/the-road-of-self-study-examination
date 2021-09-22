#include <iostream>

using namespace std;

class A
{
    public:
        A();
        ~A();
};

A::A()
{
    cout << "A in" << endl;
}

A::~A()
{
    cout << "A out" << endl;
}

class B
{
    public:
         B();
         ~B();
};

B::B()
{
    cout << "B in" << endl;
}

B::~B()
{
    cout << "B out" << endl;
}

class C : public A, public B
{
    public:
        C();
        ~C();
};

C::C()
{
    cout << "C in" << endl;
}

C::~C()
{
    cout << "C out" << endl;
}

int main()
{
    C a;  
    /* 
    A in
    B in
    C in
    C out
    B out
    A out
    */
}