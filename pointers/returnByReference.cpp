//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

int &func(int &a)
{
    cout<<a<<endl;
    return a;
}
int main()
{
    int x=10;
    func(x)=25; //function is acting as reference for x
    cout<<x;

    system("pause");
    return 0;
}