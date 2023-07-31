//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void mult(int a)
{
    cout<<"\nThe multication table for 12 is: ";
    for (int i = 0; i < 11; i++)
    {
        cout<<"\n"<<"12*"<<i<<"="<<12*i;
    }
    
}

int main()
{
    mult(12);

    system("pause");
    return 0;
}