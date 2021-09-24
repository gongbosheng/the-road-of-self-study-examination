#include <iostream>
#include <iomanip>

using namespace std;

// 调用 cout  成员函数

int main()
{
    cout.fill('*');
    cout.width(20);
    cout << 123 << endl;

    char s[100] = "hasdhasdjagdahdjasdgjasdgasdjdgshj";
    cout.write(s,10);
    cout <<endl;
    cout.put('a'+1);
    cout <<endl;


}