#include <iostream>

using namespace std;

// 重载为类的成员函数


class classname
{
    private:
        int b;

    public:
        int a;
        classname();
        classname(classname &c);
        classname& operator-(const classname &c);
        classname& operator=(const classname &c);
        friend int operator+(const classname &t, const classname &c);       
        void setB(int n);
};

classname::classname():a(1),b(2){};

classname::classname(classname &c)
{
    this->a = 100;
    this->b = 100;
}

classname& classname::operator=(const classname &c)
{
    this->a = c.a;
    this->b = 11;
    return *this;
}

int operator+(const classname &t,const classname &c)
{
    return t.b + c.b;
}

void classname::setB(int n)
{
    b = n;
}

classname& classname::operator-(const classname &c)
{
    this->a -=  c.a;
    return *this;
};

int main()
{
    classname ss1, ss2, ss3;
    ss1.a = 5;
    ss2.a = 1;
    cout << (ss1 - ss2).a << endl;
    cout << ss2.a << endl;
    ss1.setB(5);
    ss2.setB(6);
    cout << " ss2 加 ss1 " << ss2 + ss1 << endl;
    ss3 = ss2;          // 赋值运算符重载
    classname ss4(ss2); // 复制构造函数
    cout << " ss3 加 ss1 " << ss3 + ss1 << endl;
    cout << " ss4 加 ss1 " << ss4 + ss1 << endl;
}