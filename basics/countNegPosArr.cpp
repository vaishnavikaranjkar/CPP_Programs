//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void count()
{
    int a[10], n=10, countn=0, countp=0, countz=0;

    cout<<"Enter positive and negative elements for the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"\nThe array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            countp++;
        }
        else if (a[i]<0)
        {
            countn++;
        }
        else if (a[i]==0)
        {
            countz++;
        }
    }
    cout<<"\nCount of positive integers is: "<<countp<<"\nCount of negative integers is: "<<countn<<"\nCount of zeroes is: "<<countz<<endl;
    
}
int main()
{
    count();

    system("pause");
    return 0;
}