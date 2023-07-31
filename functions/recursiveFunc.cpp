#include <iostream>
using namespace std;

//recursive function is the one which calls itself.

void func(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        func(n-1);
        cout<<n<<endl;
    }
}
int main()
{
    int x=5;
    func(x);
    
    system("pause");
    return 0;
}