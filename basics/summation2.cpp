//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void str()
{
    int a, sum=0;
    cout<<"Enter the number till which you want the sum: ";
    cin>>a;
    for (int i = 0; i <= a; i++)
    {
        sum = sum + i;
    }
    cout<<"\nThe sum of first "<<a<<" natural numbers is: "<<sum;   
}
int main()
{
    str();

    system("pause");
    return 0;
}