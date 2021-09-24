#include <iostream>

using namespace std;




class Z {};

template <class T>

class A: public Z   //  普通类派生类模版
{
    public:
        T a;
};


class B: public A<int> {}; // 模版类派生普通类


class C: public A<int> {}; // 模版类派生类模版

template <class P, class T>

class D: public A <T>  // 类模版派生类模版
{
    public:
        P c;
};

int main()
{
    A<int> a1;
    B a2;
    C a3;
    D<char, int> a4;

}