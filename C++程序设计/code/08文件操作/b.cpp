#include <iostream>
#include <fstream>


using namespace std;

// 读写文本文件


typedef struct
{
    char sn[11];
    char name[21];
    int grade;
} stduent;

int main()
{
    stduent stu;
    fstream scroe("./scroe_b.txt", ios::out | ios::binary);
    cout << "学号 姓名 成绩 " << endl;
    while (cin >>  stu.sn >> stu.name >> stu.grade)
        scroe.write((char*)&stu,sizeof(stu));
    scroe.close();
    return 0;
}