#include <iostream>
using namespace std;

class rect
{
    public:
        int l, b;
        int area()
        {
            return l*b;
        }
        int perimeter()
        {
            return 2*(l+b);
        }
};
int main()
{
    rect r1; //only data members (variables) occupy memory and not functions. and separate memory spaces for separate instances

    r1.l=45;
    r1.b=3;

    int a=r1.area();
    int p=r1.perimeter();

    cout<<a<<endl<<p;

    system("pause");
    return 0;
}