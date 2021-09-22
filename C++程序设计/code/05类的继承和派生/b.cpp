#include <iostream>

using namespace std;

// 继承关系的特殊性

class Base
{
    public:
        static int a;
};


class Derived:public Base
{
    public:
        Derived();
};

Derived::Derived()
{
    a++;
}

int Base::a = 0;

int main()
{
    Base A;
    Derived B;
    cout << A.a << endl;  // 1
}