#include <iostream>
#include <iomanip>

using namespace std;

// 标志字

int main()
{
    double x = 12.34;
    cout << setw(20) << setiosflags(ios::right) << setfill('*') << setiosflags(ios::fixed)  << x << endl;
}