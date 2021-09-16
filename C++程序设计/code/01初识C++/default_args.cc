#include <iostream>

using namespace std;

void func(int a = 1);

int main()
{
    float a = 123.1;
    a = int(a);
    func();
    func(a);
}

void func(int a)
{
    cout << "a=" << a << endl;
}
