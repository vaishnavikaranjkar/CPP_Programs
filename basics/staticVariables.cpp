#include <iostream>
using namespace std;

//static variables inside functions

//by using static the value of the variable remains same as called before by a function.
void func()
{
    static int v=0; //by static the value of v is not reset to 0 everytime, but it remains constant as last time
    v++;
    cout<<v<<endl;
}
int main()
{
    func();
    func();
    func();

    system("pause");
    return 0;
}