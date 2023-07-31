//run c++ program -` ctrl+shift+b , then run main.exe from terminal. Perfect number is - if sum of the factors of the number is double the number, then it is a perfect number.
#include <iostream>
using namespace std;

void perfectNumber()
{
    int b, sum = 0;
    cout<<"Enter any number: ";
    cin>>b;
    for (int i = 1; i <= b; i++)
    {
        if (b%i==0)
        {
            sum = sum + i;
        }
    }
    if (sum==2*b)
    {
        cout<<"\nThe entered number is a perfect number. ";
    }
    else
    {
        cout<<"\nThe entered number is not a perfect number. ";
    }
    
}
int main()
{
    perfectNumber();

    system("pause");
    return 0;
}