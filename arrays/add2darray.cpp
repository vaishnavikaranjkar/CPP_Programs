//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void addArr()
{
    int x[4][4], y[4][4], z[4][4];

    cout<<"Enter the elements for first matrix: (4x4)";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>x[i][j];
        }
    }
    cout<<"\nEnter the elements for second matrix: (4x4)";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>y[i][j];
        }
    }
    
    cout<<"\nFirst matrix is: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nSecond matrix is: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nThe addition of two matrices is: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            z[i][j] = x[i][j] + y[i][j]; 
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<z[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
int main()
{
    addArr();

    system("pause");
    return 0;
}