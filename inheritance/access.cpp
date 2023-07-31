#include <iostream>
using namespace std;
 
//private members are not accessible (to modify) from derived class or an object of a class

//protected members are are not accessible (to modify) on an object of a class

//public members are accessible from inside a class, derived class and from object of a class
 
class Base
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void baseDisplay()
    {
        a=10, b=23, c=14;
    }
};
class Derived:Base
{
public:
    void derivedDisplay()
    {
        //a=1; not accessible from derived class
        b=2, c=3;
    }
};
int main()
{


    system("pause");
    return 0;
}