//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class max
{
    public:
        int a, b, c;
        void input()
        {
            cout<<"Enter any three numbers:\n";
            cin>>a>>b>>c;
        }
        void cal()
        {
            if(a>b && a>c)
            {
                cout<<"First number is maximum of the three.\n";
            }
            else if(b>a && b>c)
            {
                cout<<"Second number is maximum of the three.\n";
            }
            if(a>b && a>c)
            {
                cout<<"First number is maximum of the three.\n";
            }
        }
};
int main()
{
    class max m;
    m.input();
    m.cal();

    system("pause");
    return 0;
}