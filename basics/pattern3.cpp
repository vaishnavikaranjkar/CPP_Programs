//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void pattern()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i<=j)
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    pattern();

    system("pause");
    return 0;
}