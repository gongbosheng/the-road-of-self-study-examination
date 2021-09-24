#include <iostream>

using namespace std;

class A
{
    public:
        virtual void a();
        virtual void b();
};

void A::a()
{
    cout << "A.a" << endl;
}

void A::b()
{
    cout << "A.b" << endl;
}

class B: public A
{
    public:
        void a();
        void b();
};

void B::a()
{
    cout << "B.a" << endl;
}

void B::b()
{
    cout << "B.b" << endl;
}

class C: public A
{
    public:
        void a();
        void b();
};

void C::a()
{
    cout << "C.a" << endl;
}

void C::b()
{
    cout << "C.b" << endl;
}


int main()
{
    B b;
    C c;
    A *a = &b;
    a->a();
    a->b();
    a = &c;
    a->a();
    a->b();
}