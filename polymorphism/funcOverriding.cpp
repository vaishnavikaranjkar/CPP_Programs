#include <iostream>
using namespace std;

//two functions with same name have different functions,  this is function overriding

class Base
{
    public:
        void display()
        {
            cout<<"This is the base class"<<endl;
        }
};
class Derived: public Base
{
    public:
        void display()
        {
            cout<<"Derived class"<<endl;
        }
};

int main()
{   
    Base b;
    b.display();

    Derived d;
    d.display();
    
    system("pause");
    return 0;
}