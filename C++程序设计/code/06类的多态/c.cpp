#include <iostream>

using namespace std;

// 多态的使用

class A
{
    public:
        void a();
        virtual void b();
};


void A::a()
{
    b();
};  

void A::b()
{
    cout << "A" << endl;
}


class B:public A
{
    public:
        void b();
};

void B::b()
{
    cout << "B" << endl;
}

int main()
{
    B b;
    A *a = &b;
    a->a(); // B  在成员函数中调用虚函数
}
