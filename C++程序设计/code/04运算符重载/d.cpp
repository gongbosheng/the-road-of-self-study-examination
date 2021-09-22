#include <iostream>

using namespace std;

// 重载强制类型转换运算符


class classname
{
    public:
        int a;
        operator int();
};

classname::operator int()
{
    return 18;
}


int main()
{
    classname ss1;
    cout << (int)ss1 << endl;
}