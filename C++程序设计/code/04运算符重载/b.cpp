#include <iostream>

using namespace std;

// 深拷贝和浅拷贝

class classname1
{
    public:
        int a, *b;  
};

class classname2
{
    public:
        int a, *b;
        classname2& operator=(const classname2 &c);  
        ~classname2();
};

classname2::~classname2()
{
    delete b;
}

classname2& classname2::operator=(const classname2 &c)
{
    this->a = c.a;
    this->b = new int;   // 开辟新的空间去存放值
    *this->b = *c.b;
    return *this;
}

int main()
{
    //  浅拷贝
    cout << "浅拷贝" << endl;
    classname1 s1, s2;
    s1.a = 1;
    s1.b = new int;
    *s1.b = 2;
    cout << " s1 a " << s1.a << " s1 b " << *s1.b << endl; 
    s2 = s1;
    cout << " s2 a " << s2.a << " s2 b " << *s2.b << endl; 
    *s1.b = 5;
    cout << " s2 a " << s2.a << " s2 b " << *s2.b << endl; 

    // 深拷贝
    cout << "深拷贝" << endl;
    classname2 c1, c2;
    c1.a = 1;
    c1.b = new int;
    *c1.b = 2;
    cout << " c1 a " << c1.a << " c1 b " << *c1.b << endl; 
    c2 = c1;
    cout << " c2 a " << c2.a << " c2 b " << *c2.b << endl; 
    *c1.b = 10;
    cout << " c2 a " << c2.a << " c2 b " << *c2.b << endl; 
}