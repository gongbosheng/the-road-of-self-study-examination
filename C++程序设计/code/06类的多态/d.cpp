#include <iostream>

using namespace std;

// 虚析构函数

class A
{
    public:
        virtual ~A();  // 析构函数是否为虚函数印象着 B 是否析构
        // ~A();
};

A::~A()
{
    cout << "A" << endl;
}

class B: public A
{
    public:
        ~B();
};

B::~B()
{
    cout << "B" << endl;
}

int main()
{
    A *a = new B;
    delete a;
}
