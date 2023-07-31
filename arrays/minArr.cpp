//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void min()
{
    int a[5], n=5, min;
    cout<<"\nEnter 5 elements for the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"\nThe array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    min=a[0];
    for (int i = 0; i <n; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
    }
    
    cout<<"\nMinimum value in the array is: "<<min<<endl;
}
int main()
{
    min();

    system("pause");
    return 0;
}