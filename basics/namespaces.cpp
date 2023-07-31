//namespaces are used to remove name conflicts
//when a program need two functions of same name without being overloaded then namespaces are used

#include <iostream>
using namespace std; //std is standard namespace which contains cin, cout functions

namespace first
{
    void func()
    {
        cout<<"first func"<<endl;
    }
}
namespace second
{
    void func()
    {
        cout<<"second func"<<endl;
    }
}

using namespace first; //by default first namespace is used

int main()
{
    func();
    second::func(); //second namespace needs to be called explicitly

    system("pause");
}