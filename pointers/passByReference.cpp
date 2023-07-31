//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

//in pass by address, the whole function gets replaced at the place of function call in the main function
//avoid using loops in pass by references
//pass by references is also called as inline function.

int swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=20, y=3;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

    system("pause");
    return 0;
} 