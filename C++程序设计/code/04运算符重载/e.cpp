#include <iostream>

using namespace std;

// 自增自减运算符重载

class classname
{
    public:
        int a;
        classname():a(0){};
        classname & operator++();      // 前置++
        classname & operator++(int);   // 后置++ 虽然多了一个参数，但是参数并没有实际的效用 只作为标识。
};

classname & classname::operator++(int)
{
    classname tmp(*this);
    a++;
    return tmp;   // 这里会有一个警告， 因为局部变量已经释放，返回的引用地址可能不存在啦。 return tmp 的时候， 会先把值符知道约定的保存返回值的地方， 然后 tmp 才被释放， 因为 tmp 值已经被复制啦 释放也没有关系
}

classname & classname::operator++()
{
    a++;
    return *this;
}


int main()
{
    classname ss1;
    cout << (ss1++).a << endl;   // 0
    cout << (++ss1).a << endl;   // 2

}