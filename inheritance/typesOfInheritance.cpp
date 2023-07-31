/*simple inheritance

hierarchical inheritance - many classes inheriting from a base class

multi level inheritance - A class is inheriting from base class and B class is inheriting from A class

multiple inheritance - a class can inherit from more than one class (java doesnt have multiple inheritance)

hybrid inheritance - combination of any two of the above types of inheritances
(virtual base classes)
*/

#include <iostream>
using namespace std;

class Base
{
private: int a;
protected: int b;
public: int c;
    void funcBase()
    {
        a=10;
        b=2;
        c=3;
    }
};
class Derived:public Base //here public means that we are inheriting Base class publicly and the protected and private members are as it is taken in derived class.

//if it is protected, then it means the members of Base class become protected in derived class. then these members can be accessed from same class and another class but not from an object of a class.

//if it is private, then the all members from base class are private in derived class. and these private members in derived class are accessible from the same class only and not from another derived class or object of a class
{
public:
    void funcDerived()
    {
        //a=14;
        b=25;
        c=32;
    }
};
class Derived2:public Derived
{
public:
    void funcDerived2()
    {
        //a=12;
        b=21;
        c=1;
    }
};
int main()
{
    Derived d;
    //d.a=0;
    //d.b=23;
    d.c=10;
    cout<<"C is: "<<d.c<<endl;

    system("pause");
    return 0;
    
}