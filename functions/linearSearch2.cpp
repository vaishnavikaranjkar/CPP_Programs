#include <iostream>
using namespace std;

int search(int a[], int key)
{
    for (int i = 0; i < 5; i++)
    {
        if(key==a[i])
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int a[]={2,5,4,7,8};
    int key=3;
    int index=search(a,3);
    if(index==0)
    {
        cout<<"The key is not found"<<endl;
    }
    else
    {
        cout<<"The key is found at index: "<<index<<endl;
    }
    
    system("pause");
    return 0;
}