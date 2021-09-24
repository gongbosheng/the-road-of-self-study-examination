#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// 调用 cin 成员函数

int main()
{
    // char ch;
    // ch = cin.get();
    // cout.put(ch) << endl;
    // char s1[20], s2[20];
    // cin.getline(s1,20);     // 只能读取 20 -1 个字符 （\0） 长度和 \n 那个满足读取都会结束 超出给定长度会异常（可作为 while退出条件）
    // cin.getline(s2,20,'c'); // 读到1 或者 \n 结束
    // cout.write(s1,20) << endl;
    // cout.write(s2,20) << endl;

    // char s[100];
    // ifstream f("./test.txt");
    // // cout << f.eof() << endl;
    // while (!f.eof())
    // {
    //     f.getline(s,100);
    //     cout << s << endl;
    // }

    char s[100];
    cout << cin.peek() << endl; // 113
    cin.ignore(2,EOF) >> s;     // qwer
    cout << s << endl;          // er
}