//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

enum day {mon,tues,wed,thurs,fri,sat,sun};

int main()
{
    day d;
    d=tues;
    cout<<d<<endl;

    cout<<mon<<endl;
    cout<<fri<<endl;
    cout<<sun<<endl;
    cout<<wed<<endl;

    system("pause");
    return 0;
}