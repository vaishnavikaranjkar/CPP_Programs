#include <iostream>
using namespace std;

class Test
{
    public:
        int *p;
        Test() //constructor. can have multiple constructors. when object is created, the constructor is called.
        {
            p=new int[10];
            cout<<"Array memory allocated"<<endl;
        }
        ~Test() //destructor
        {
            delete []p; //deletes the memory allocated. cannot have multiple destructors
            cout<<"Array memory deallocated"<<endl;
        }
};
int main()
{
    Test t;

    system("pause");
    
}