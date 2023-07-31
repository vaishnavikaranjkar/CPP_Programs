//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class max
{
    public:
        int a,b;
        void input()
        {
            cout<<"Enter two numbers: \n";
            cin>>a>>b;
        }
        void maxNum()
        {
            if(a>b)
            {
                cout<<"First number is greater than second number. \n";
            }
            if(b>a)
            {
                cout<<"Second number is greater than first number. \n";
            }
            if(a==b)
            {
                cout<<"First number is equal to second number. \n";
            }
        }
};
int main()
{
    class max m;
    m.input();
    m.maxNum();

    system("pause");
    return 0;
}