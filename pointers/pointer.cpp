//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void pointer()
{
    int a=123;
    int *p; //declaration
    p=&a; //initialization
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl; //dereferencing/retrieving

    int a[5];
    int *p=&a; //here the array a is initialized in stack part of the memory and pointer p is pointing to the address of a.
}
void heapMemoryAllocation()
{
    int *x= new int[5]; //here the empty array is initialized in the heap section of the memory. The new operator is an operator which denotes a request for memory allocation on the Heap

    x[0] = 12; //array is acessed through the pointer variable.

    //always delete the array (or anything from the heap) because even if the function is done executing, the memory is wasted in the heap as long as the program is still running.

    delete []x; 
    x=nullptr; //always make the pointer null after deleting the array.
}
int main()
{
    pointer();
    heapMemoryAllocation();
    //main function is initialized in code section of the memory
    system("pause");
    return 0;
}