//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class problems
{        
    public:
        int n;
        int a[25];
        int sum=0;
        void summation()
        {
            cout<<"How many number you want to add? ";
            cin>>n;
            cout<<"Enter the numbers: ";
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(int j=0;j<n;j++)
            {
                sum+=a[j];
            }
            cout<<"The sum of all numbers is: "<<sum;
        }      
};
int main()
{
    problems p;
    p.summation();

    system("pause");
    return 0;
}