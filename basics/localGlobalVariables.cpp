//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

int g=0; //global variables, they are stored in the code section of the memory.
void func()
{
    int a=5; //local variable
    {
        int g=3;
        g++;
        cout<<g<<endl;
    }
    g=g+a;
    cout<<g<<endl;
}
int main()
{
    g=15;
    func();
    g++;
    cout<<g;

    system("pause");
    return 0;
}

/*output is
4
20
21
*/