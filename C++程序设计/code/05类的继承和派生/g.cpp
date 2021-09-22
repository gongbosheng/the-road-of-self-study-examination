#include <iostream>

using namespace std;

// 多层次派生

class A
{
    public:
        int a;
};

class B: public A{};

class C: public B{};

int main()
{
    C c;
    c.a = 1;
    cout << c.a  << endl;
}