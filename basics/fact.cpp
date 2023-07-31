#include <iostream>
using namespace std;

void fact(int n)
{
    if(n==1 || n==0)
    {
        cout<<"1";
    }
    else
    {
        cout<<"test";
        return n*fact(n-1);
    }
}

int main()
{
    fact(4);
    system("pause");
    return 0;
}