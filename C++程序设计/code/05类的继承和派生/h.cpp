#include <iostream>

using namespace std;


class A
{
    public:
        int a;
};


class B: public A{};

int main()
{
    B *b;
    b->a = 1;
    A *a = b;
    cout << a->a << endl;
}
