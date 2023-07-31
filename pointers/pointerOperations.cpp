//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void ptr()
{
    int a[5]={2,14,5,36,4};
    int *p=a;
    
    cout<<*p<<endl;
    
    p++;
    cout<<*p<<endl;

    p--;
    cout<<*p<<endl;

    p=p+2;
    cout<<*p<<endl;

    p=p-2;
    cout<<*p<<endl;   
}
int main()
{
    ptr();

    system("pause");
    return 0;
}