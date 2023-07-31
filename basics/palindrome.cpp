//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void pal()
{
    int a, b, num, revNum=0;
    cout<<"Enter any number: ";
    cin>>a;
    num=a;
    cout<<"Reverse of the number is: ";
    while (a>0)
    {
        b=a%10;
        a=a/10;
        cout<<b;
        revNum=(revNum*10)+b;
    }
    if(revNum==num)
    {
        cout<<"\nThe number is a palindrome. ";
    }
    else if(revNum!=num)
    {
        cout<<"\nThe number is not a palindrome. ";
    }
}
int main()
{
    pal();

    system("pause");
    return 0;
}