//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void max()
{
    int a[5]={1,3,5,9,45};
    int max=a[0];
    for (int i = 1; i < 5; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"The maximum element is: "<<max<<endl;
}
int main()
{
    max();

    system("pause");
    return 0;
}