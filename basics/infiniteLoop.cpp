//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void infLoop()
{
    int i=0;
    for (; ;)
    {
        cout<<i<<"\n Infinite Loop";
        i++;
    }
    
}
int main()
{
    infLoop();

    system("pause");
    return 0;
}