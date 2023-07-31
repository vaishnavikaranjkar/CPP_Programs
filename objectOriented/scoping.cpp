//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

int x=3;
int main()
{
    int x=10;
    {
        int x=20;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    
    cout<<::x<<endl;//prints the global value of x

    system("pause");
    return 0;
}