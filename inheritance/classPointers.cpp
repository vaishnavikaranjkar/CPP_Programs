#include <iostream>
using namespace std;

//base class pointer and derived class object

class Base
{
public:
    void func1(){cout<<"Base Function 1"<<endl;};
    void func2(){cout<<"Base Function 2"<<endl;};
};
class Derived:public Base
{
public:
    void func3(){cout<<"Derived Function 3"<<endl;};
};

int main()
{
    Base *p; //pointer of class data type.
    p=new Derived; 
    //pointer is of Base class. Object is of derived class. 
    //Then the base class functions will be called.
    p->func1();
    p->func2();

    //Derived *pt;
    //pt=new Base;
    //pt->func3(); //not allowed


    //is same as :

    Derived d;
    Base *ptr=&d;
    ptr->func1();
    
    
    system("pause");
    return 0;
}