//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

//using ternary operators
int ifelse(int a, int b)
{
    int c;
    a>b && a>c ? a : b>c ? b : c;//reads - if a>b and a>c then return a, else if b>c then return b or else return c.

    return a>b?a:b; //reads - if a is greater than b, return a or else b.

}
int main()
{
    cout<<ifelse(12,55);

    system("pause");
    return 0;
}