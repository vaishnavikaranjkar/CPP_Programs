#include <iostream>
using namespace std;

//when a class contains a pure virtual function, then that class is called abstract class

//if a class contains functions which are all pure virtual, then it is called as interface. this is done to just achieve polymorphism

class Base //abstract class
{
    public:
        void func1()
        {
            cout<<"Base func1"<<endl;
        }
        virtual void func2()=0;
};
class Derived : public Base
{
    public:
        void func1()
        {
            cout<<"Derived func1"<<endl;
        }
        void func2()
        {
            cout<<"Derived func2"<<endl;
        }
};
int main()
{
    Base *b = new Derived;
    b->func2();

    system("pause");
    return 0;
}