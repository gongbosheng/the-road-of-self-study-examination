#include <iostream>

using namespace std;

template <class T1, class T2>
  


class A
{
    public:
        T1 a;
        T2 b;
};

template <int i>

class B
{
    public:
  	    int a[i];
};


int main()
{
    A<int,char> a;
    a.a = 1;
    a.b = 'c';
    cout << a.b << a.a << endl;
  	B<1> b;
}


