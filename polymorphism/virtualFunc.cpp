#include <iostream>
using namespace std;
//A virtual function in C++ is a base class member function that you can redefine in a derived class to achieve polymorphism.
class BasicCar
{
    public:
        virtual void start(){cout<<"BasicCar started"<<endl;} // a virtual function must be overrided by the derived class

        //virtual void test()=0; //pure virtual function. it has no body
};
class AdvCar:public BasicCar
{
    public:
        void start(){cout<<"Adv car started"<<endl;}
};

int main()
{
    BasicCar *ptr = new AdvCar; //object is of adv car but the pointer is of basic car

    ptr->start(); //function is of derived class. 
    
    system("pause");
    return 0;
}