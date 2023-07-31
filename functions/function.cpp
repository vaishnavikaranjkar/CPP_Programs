//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
#include <math.h>
using namespace std;

int add(int x, int y) //header or prototpe or signature of a function
{   
    int sum=x+y;
    return sum;
}

int maxim(int l, int m, int n)
{
    if(l>m && l>n)
    {
        return l;
    }
    else if(m>n)
    {
        return m;
    }
    else return n;
}

int power(int i, int j)
{
    return pow(i,j);
}
main() //here default return type is int
{

    //function 1 ADD
    int a=2, b=3,c;
    c=add(a,b);
    cout<<c<<endl; 
    //or
    //different functions can have variables with same name.
    int x=3,y=6,z;
    z=add(x,y);
    cout<<z<<endl;


    //function 2 Maximum
    cout<<maxim(10,12,3)<<endl;


    //function 3 POWER
    cout<<power(12,3)<<endl;

    system("pause");
}