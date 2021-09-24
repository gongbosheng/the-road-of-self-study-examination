#include <iostream>

using namespace std;

// 函数模版

template <typename T>

T abs(T x)
{
    return x;
}

int abs(int x)
{
    return x + 1;
} 

int abs(int y, int x)
{
    return x + y;
}

int main()
{
    double a = 1.11;
    int b = 2;
    cout << abs(a) << " " <<   abs(b) << " " << abs(a,b) << endl;
}