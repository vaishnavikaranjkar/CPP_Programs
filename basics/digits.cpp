//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void numDigits()
{
    int a, b, count=0;
    cout<<"\nEnter any number: ";
    cin>>a;
    
    while (a>0)
    {
        b=a%10;
        cout<<"\nThe  digits in the number are: "<<b;
        a=a/10;
        count++;
    }
    cout<<"\nThe number of digits are: "<<count;
    
}
void reverseDigits()
{
    int x, y;
    cout<<"\nEnter any number: ";
    cin>>x;

    while (x>0)
    {
        y=x%10;
        x=x/10;
        cout<<y;
    }
}
int main()
{
    numDigits();
    reverseDigits();

    system("pause");
    return 0;
}