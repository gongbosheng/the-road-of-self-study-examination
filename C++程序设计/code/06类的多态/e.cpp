#include <iostream>

using namespace std;

// 纯虚函数和抽象类

class A
{
    public:
        virtual void a() = 0;
};

class B: public A
{
    public:
        void a();
};

void B::a()
{
    cout << "B" << endl;
}


int main()
{
    // A a; // 抽象类不能直接实例化
    A *a = new B;
    a->a();

}