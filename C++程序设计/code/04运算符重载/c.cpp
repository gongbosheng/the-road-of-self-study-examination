#include <iostream>

using namespace std;

// 重载 流插入 流提取运算符

class classname
{
    public:
        int a;
        friend void operator<<(ostream &,classname &c);
        friend void operator>>(istream &,classname &c);
};


void operator<<(ostream & stream,classname &c)
{
    stream << "你好" <<endl;
} 

void operator>>(istream & stream,classname &c)
{
    stream >> c.a ;
}


int main()
{
    classname ss1;
    cout << ss1;
    cin >> ss1;
    cout << ss1.a << endl;
}