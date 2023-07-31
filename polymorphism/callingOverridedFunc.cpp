#include <iostream>
using namespace std;

class Base
{
    public:
        void display()
        {
            cout<<"Base class"<<endl;
        }
};
class Derived:public Base
{
    public:
        void display()
        {
            cout<<"Derived class"<<endl;
        }
};
int main()
{
    Base *ptr = new Derived;

    ptr->display(); //points to the display function of base class 

    system("pause");
    return 0;
}