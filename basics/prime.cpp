//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void prime()
{
    int num, count=0;
    cout<<"\nEnter a number to check if it is a prime number. ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            count++;
        }        
    }
    if (count>2)
    {
        cout<<"\nThe number is not prime. ";
    }
    else
    {
        cout<<"\nThe number is prime. ";
    }
}
int main()
{
    prime();

    system("pause");
    return 0;
}