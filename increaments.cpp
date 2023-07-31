#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int i,j,m;
    i=++a[1];
    j=a[1]++;
    m=a[i++];
    cout<<i<<j<<m;
    system("pause");
    return 0;
}