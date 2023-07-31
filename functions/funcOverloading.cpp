//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;


//function overloading means having two functions with same name but different parameters.

//in cpp, functions are said to be different even if they have same name, but different parameters(may be different names or numbers).


int add(int x, int y)
{
    return x+y;
}
int add(int x, int y, int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
int main()
{
    int a=10, b=15, c=16, d, e;
    d=add(a,b);
    e=add(a,b,c);
    float f=add(2.3f,3.3f);
    cout<<d<<endl<<e<<endl<<f<<endl;

    system("pause");
    return 0;
}