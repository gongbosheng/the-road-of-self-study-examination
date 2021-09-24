#include <iostream>
#include <fstream>


using namespace std;

// 读写文本文件

int main()
{
    // int grade;
    // char sn[11], name[21];
    char data[1000];

    // fstream scroe("./scroe.txt", ios::out);
    fstream scroe("./scroe.txt", ios::in);

    // cout << "学号 姓名 成绩 " << endl;
    // while (cin >> sn >> name >> grade)
        // scroe << sn << " " << name  << " "<< grade << endl;
    scroe >> data;
    cout << data << endl;
    scroe.close();
    return 0;
}