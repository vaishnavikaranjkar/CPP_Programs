//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class Outer
{
    public: 
        int a=10;
        static int b;
        void func1()
        {
            i.func2(); //outer class can access only public members of inner class

            cout<<i.x<<endl;
        }
        class Inner // a class inside another class
        //this class cannot access non-static members, it can only access static members
        {
            public:
                int x=23;
                void func2()
                {
                    cout<<"Inner func2"<<endl;
                }
        };
        Inner i; //the class object must be created after the class definition
};

int Outer::b=11;

int main()
{
    Outer o;
    o.func1();
    cout<<"b is "<<o.b<<endl;

    Outer::Inner i;//inner class can be accessed like this from main function
    i.func2();

    system("pause");
    return 0;
}