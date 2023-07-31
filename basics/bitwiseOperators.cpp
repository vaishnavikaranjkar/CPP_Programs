//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class bitwise
{
    public:
    int a=5, b=6, c;
    char x=5, y;
    void bitAnd()
    {
        c=a&b;
        cout<<c<<endl;
    }
    void bitOr()
    {
        c=a|b;
        cout<<c<<endl;
    }
    void bitXor()
    {
        c=a^b;
        cout<<c<<endl;
    }
    void bitNot()
    {
        c=~b;
        cout<<c<<endl;
    }
    void bitShiftRight()
    {
        y=x>>1;
        cout<<y <<endl;
    }
    void bitShiftLeft()
    {
        y=x<<1;
        cout<<y<<endl;
    }
};
int main()
{
    bitwise b;
    b.bitAnd();
    b.bitOr();
    b.bitXor();
    b.bitNot();
    b.bitShiftRight();
    b.bitShiftLeft();

    system("pause");
    return 0;
}

        