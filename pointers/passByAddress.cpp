//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

//in pass by address, the values of variables are specified as addresses and they are referenced by the function parameters by using pointers

int swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=20, y=3;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;

    system("pause");
    return 0;
} 