//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class shortCircuit
{
    public:
        int a=10, b=5, i=1;
        void calc()
        {
            if(a>b && ++i<=b)
            {
                cout<<i<<endl;
            }
            if(a<b || ++i<=b)
            {
                cout<<i<<endl;
            }
        }
};
int main()
{
    shortCircuit s;
    s.calc();

    system("pause");
    return 0;
}