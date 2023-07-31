//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

// A function can return address of memory.
// It should not return address of local variables, which will be disposed after function ends.
// It can return address of memory allocated in heap.

int *func()
{
    int *p=new int[5]; //array is created in heap memory and the pointer p is pointing to that memory.
    
    for (int i = 0; i < 5; i++)
    {
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;
}
int main()
{
    int *q=func();
    cout<<q<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<q[i]<<endl;
    }

    system("pause");
    return 0;
}