#include <iostream>
using namespace std;

class rect
{
    public:
        int l;
        float  b;
        int area()
        {
            return l*b;
        }
};
int main()
{
    rect r;
    rect *p; //created inside stack. 

    p=&r;//the pointer p is pointing to the object r of the class rect

    r.l=10; //dot operator is used to access the members of an object using variable name

    p->l=10; // arrow operator is used to access the members of an object, using a pointer on an object
            // p's length is 10

    p->b=5.1;

    
    system("pause");
    return 0;
}