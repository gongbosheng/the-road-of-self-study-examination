#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int c;
    char *a = (char*) malloc(sizeof(char));
    fstream scroe("./scroe_b.txt", ios::in | ios::binary); 
    scroe.read(a,20);
    c = scroe.gcount();
    cout << *a << endl;
    cout << c << endl;
}