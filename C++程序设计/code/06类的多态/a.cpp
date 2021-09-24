#include <iostream>

using namespace std;

// 虚函数

class A
{
    public:
        virtual void getA();
};

void A::getA()
{
    cout << "A" << endl;
}


class B : public A
{
    public:
        void getA();
};

void B::getA()
{
    cout << "B" << endl;
}

int main()
{
    B b;
    A *a1 = &b;
    A &a2 = b;
    A a3 = b;
    a1->getA();  // 指针形式
    a2.getA();   // 引用形式
    a3.getA();   // 对象形式无法调用虚函数
    a1->A::getA();  // 类名限定符
}