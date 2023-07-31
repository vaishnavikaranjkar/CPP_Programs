//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
#include <math.h>
using namespace std;

void binary()
{
    int a[10], n=10, num, lowValue, highValue, midValue, arrNum, index;

    cout<<"Enter "<<n<<" elements in sorted order for the array: ";
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
    
    int j=0;
    lowValue=0; highValue=9;
    
    while (j<=10)
    {
        midValue=floor((lowValue+highValue)/2);
        arrNum=a[midValue];
        if (arrNum==num)
        {
            cout<<"\n"<<num<<" found at position "<<midValue;
            break;
        }
        else if (arrNum>num)
        {
            lowValue=lowValue;
            highValue=midValue-1;
            if (lowValue==midValue/*lowValue==highValue-1*/)
            {
                cout<<"\nElement not found.";
                break;
            }
            
        }
        else if (arrNum<num)
        {
            lowValue=midValue+1;
            highValue=highValue;
            if (highValue==midValue/*lowValue==highValue-1*/)
            {
                cout<<"\nElement not found.";
                break;
            }
        }
        j++;
    }
}
int main()
{
    binary();

    system("pause");
    return 0;
}