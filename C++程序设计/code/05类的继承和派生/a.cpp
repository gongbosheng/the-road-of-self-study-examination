#include <iostream>

using namespace std;

class Base
{
    private:
        int a;
    public:
        Base(int a);
        void print();
};

Base::Base(int a):a(a){};

void Base::print()
{
    cout << a << endl; 
}

class Derived: public Base
{
    private:
        int a;
    public:
        Derived(int x, int y);
        void print();
};

void Derived::print()
{
    cout << a << endl;
}


Derived::Derived(int x, int y):Base(x)
{
    a = y;
}

int main()
{
    Derived ss1(20,10);
    ss1.print();        // 10  就近原则 但是如果子类没有 print 这个函数， 则会自动调用基类 print 这个方法 打印的也是 Base 的 a 值
    ss1.Base::print();  // 20
}