//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

//default args allow us to write efficient code and combine various overloaded functions and write them as single function

int add(int x, int y, int z=0) //here default arg is z=0
{
    return x+y+z;
}
int main()
{
    cout<<add(2,1,3)<<endl<<add(2,8);

    system("pause");
    return 0;
}