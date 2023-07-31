//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void linearSearch()
{
    int a[5], n=5, num;
    bool nullNum=1;

    cout<<"Enter "<<n<<" elements for the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<"\nThe array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nEnter the element to be searched: ";
    cin>>num;

    for (int i = 0; i < n; i++)
    {
        if(num==a[i])
        {
            nullNum=true;
            cout<<"\n"<<num<<" found at position "<<i;
        }        
        else
        {
            nullNum=false;
        }
    }
    if (nullNum==false)
    {
        cout<<"Not found."; 
    }   
}
int main()
{
    linearSearch();

    system("pause");
    return 0;
}