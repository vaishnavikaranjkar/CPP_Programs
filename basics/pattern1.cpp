//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void pattern()
{
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<count++<<"  ";
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