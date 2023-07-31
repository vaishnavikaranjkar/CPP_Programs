//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void array_func()
{
    int arr[5];
    arr[0] = 2;
    arr[1] = 1;
    cout<<arr[0]<<arr[1];
}
void array_func2()
{
    int ar[6] = {1,2,4,3,6,5};
    for(int i = 0; i<6; i++)
    {
        cout<<ar[i]<<" ";
    }
}
void array_func3()
{
    int a[]={1,2,3};
    for(int x:a) //auto x:a ----> to give unknown data type (This is a for each loop)
    {
        cout<<x<<endl;
    }
}
void arrAdd()
{
    int sum=0;
    int array[5]={1,5,6,8,9};
    for(int j=0;j<5;j++)
    {
        sum=sum+array[j];
    }
    cout<<sum;
}

int main()
{
    array_func();
    array_func2();
    array_func3();
    arrAdd();
    
    system("pause");
    return 0;
}