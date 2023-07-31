//powerful feature in cpp which is not supported by any other language
#include <iostream>
using namespace std;
int main()
{
    int x=10;
    int &y=x; //must be initialized that time only. y is an alias of x. this acts like another name for the same variable. 
    //x and y are accessing the same memory
    y++;
    cout<<y<<endl;
    x++;
    cout<<x;

    int a=x;
    x=5;
    a=x;
    cout<<a;

    system("pause");
    return 0;
}