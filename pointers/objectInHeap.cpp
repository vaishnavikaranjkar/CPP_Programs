//creating an object in heap using pointer

#include <iostream>
using namespace std;

class rect
{
    public:
        int l,b;
        int area()
        {
            return l*b;
        }
};
int main()
{
    rect *p;
    p=new rect; //object of rect class is created with the pointer p pointing to it

    rect *q=new rect();//same as above two lines of code

    p->l=5;
    p->b=3;

    cout<<p->area();

    system("pause");
    return 0;
}
//Why heaps
//Use the stack when your variable will not be used after the current function returns. Use the heap when the data in the variable is needed beyond the lifetime of the current function. Objects stored in the heap are globally accessible whereas stack memory can't be accessed by other threads.