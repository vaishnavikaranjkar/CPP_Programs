//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

/*In runtime polymorphism, the compiler resolves the object at run time and then it decides which function call should be associated with that object.

for runtime polymorphism - 
virtual func
pointer to the base class
overrided functions
- are necessary

this is called as dynamic method dispatch
*/

class Car
{
    public:
        virtual void start()
        {
            cout<<"Car started"<<endl;
        }
        void stop()
        {
            cout<<"Car stopped"<<endl;
        }
};
class Innova:public Car
{
    public:
        void start()
        {
            cout<<"Innova started"<<endl;
        }
        void stop()
        {
            cout<<"Innova stopped"<<endl;
        }
};
class Swift:public Car
{
    public:
        void start()
        {
            cout<<"Swift started"<<endl;
        }
        void stop()
        {
            cout<<"Swift  stopped"<<endl;
        }
};
int main()
{
    Car *c = new Innova;
    c->start(); //innova started
    c=new Swift;
    c->start(); //Swift started

    system("pause");
    return 0;
}