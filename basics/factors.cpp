//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void factors()
{
    int a, i, count=0;
    cout<<"Enter any number: ";
    cin>>a;
    cout<<"\nThe factors of the given number are: ";
    for (i = 1; i <= a; i++)
    {
       if (a%i==0)
       {
           count++;
           cout<<i<<"\n";
       }
    }
    if (count==2)
    {
       cout<<"\nThe number is a prime number."<<endl;
    }
    else
    {
        cout<<"\nThe number is not prime."<<endl;
    }
}
void sumFactors()
{
    int b, j, sum = 0;
    cout<<"Enter any number: ";
    cin>>b;
    for (j = 1; j <= b; j++)
    {
        if (b%j==0)
        {
            sum = sum + j;
        }
    }
    cout<<"The sum of all factors of the number are: "<<sum<<endl;
}
int main()
{
    factors();
    sumFactors();

    system("pause");
    return 0;
}