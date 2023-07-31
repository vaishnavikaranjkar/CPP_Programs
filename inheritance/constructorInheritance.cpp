#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"This is the base class."<<endl;
    }
    Base(int x)
    {
        cout<<"Base"<<x<<endl;
    }
};
class Derived:public Base
{
public:
    Derived()
    {
        cout<<"This is derived class"<<endl;
    }
    Derived(int y)
    {
        cout<<"Derived"<<y<<endl;
    }
    Derived(int a, int x):Base(x)
    {
        cout<<"parametrized constructor of base class"<<endl;
    }
};
int main()
{
    //Derived d(); the default constructor of base class will get executed.

    Derived d(12); //the default constructor of parent class will get executed and the parametrized constructor of derived class will get displayed.
    
    Derived d1(12, 4);//calling parametrized constructor of base class from derived class.
    
    system("pause");
    return 0;
}