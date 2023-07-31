//constructors are automatically called and they give default parameters to functions
//eg- a cube needs defined dimensions to be constructed. 
/*
default
parametrized
copy
*/

/*
constructor is function which will have same name as the class name
constructor is used to acquire resources
*/
#include <iostream>
using namespace std;

class rect
{
    private:
        int length,breadth;
    public:
        rect() //default constructor or non-parameterized constructor - used to set valid values instead of garbage values. it gets called automatically.
        {
            length=0;
            breadth=0;
        }
        rect(int l, int b)//parameterized constructor has parameters.
        {
            setLength(l);
            setBreadth(b);
        }
        rect(rect &r1)//The copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.
        {
            length=r1.length;
            breadth=r1.breadth;//this line says that, whichever object reference we have got from the &r1 (here r), that breadth value will be equal to the l and b of this r2 object
        }
        // rect(int l=0, int b=0 )//default values of the parameters
        // {
        //         //can be used instead of default constructor
        // }
        void setLength(int l)
        {
            if(l>=0)
            {
                length=l; 
            }
            else
            {
                length=0;
            }
        }
        void setBreadth(int b)
        {
            if(b>=0)
            {
                breadth=b; 
            }
            else
            {
                breadth=0;
            }
        }
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
        int area()
        {
            return length*breadth;
        }
};
int main()
{
    rect r;
    rect r3(); //default constructor is called.
    rect r1(4,5);//parametrized constructor is called.
    rect r2(r);//copy constructor is called.

    system("pause");
    return 0;
}