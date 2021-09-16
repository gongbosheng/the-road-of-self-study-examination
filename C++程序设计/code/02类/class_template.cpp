#include <iostream>
#include <string>

using namespace std;

class classname
{
   public:
      int method(int a, int b);
   private:
      int a,b,c;
};

int classname::method(int a, int b)
{
   if (a > b) cout << a << endl;
   return 1;
}

int main()
{
   classname ss;
   ss.method(2,1);   
}