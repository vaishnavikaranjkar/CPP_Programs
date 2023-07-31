//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void gcd()
{
    int a, b;
    cout<<"Enter any two numbers: ";
    cin>>a>>b;

    while(a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else if (b>a)
        {
            b=b-a;
        }
    }
    cout<<"The GCD of two numbers is: "<<a<<"\n";
}
int main()
{
    gcd();

    system("pause");
    return 0;
}