//concept of data hiding
//accessor functions are the getter functions
//mutator functions are the setter functions

#include <iostream>
using namespace std;

class rect
{
    private:
        int length,breadth;
    public:
        void setter(int l, int b)
        {
            if(l, b>=0)//if loop is executed to make this setter more intelligent. i.e to check if l and b are non negative by user.
            {
                length=l; //to set the entered values in main func, to the values in class.
                breadth=b;
            }
            else
            {
                length=0;
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
    r.setter(2,4);
    cout<<r.getLength()<<" "<<r.getBreadth();
    cout<<r.area();
    system("pause");
    return 0;
}