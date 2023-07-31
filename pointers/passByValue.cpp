//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

//in pass by value, only the value is passed and this results in - values of x and y not being swaped (below)

int swap(int a, int b)
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