#include <iostream>

using namespace std;


class classname
{
    public:
        static int n;
        int year, mouth;
        classname();
        classname(int);
        classname(int, int);
        classname(classname &c);
        classname(const classname &c);
        ~classname();
        void add();
    private:
        int c;
};

classname::classname(): year(1), mouth(2){
    cout << year << mouth << endl;
};

classname::classname(int a) : year(a), mouth(2){};

classname::classname(int a, int b) : year(a), mouth(b){};

classname::classname(classname &c):year(c.year), mouth(c.mouth){};

classname::classname(const classname &c):year(c.year), mouth(c.mouth){};

void classname::add()
{
    cout << "n ++" <<endl;
    n++;
};

classname::~classname()
{
    cout << "析构函数" << endl;
}

int classname::n = 0;

int main()
{
	classname *ss = new classname();
    delete ss;  // 当对象消亡的时候自动调用 析构函数

    classname s1(5,6);
    classname s2=s1;
    cout << s2.year << endl;

    s1.add();
    s2.add();
    cout << s1.n;
}