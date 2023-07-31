//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

void avg()
{
    int a[4][4] = {{2,3,45,7}, {6,1,9,10}, {25,14,11,3},{5,48,2,1}};

    int sum=0, avg;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum=sum+a[i][j];
        }
    }

    avg=sum/16;
    cout<<"\nThe average of all elements in the array is: "<<avg<<endl;
    
}
int main()
{
    avg();

    system("pause");
    return 0;
}