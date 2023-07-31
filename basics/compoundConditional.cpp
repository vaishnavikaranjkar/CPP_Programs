//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class compound
{
    public:
        int a;
        void input()
        {
            cout<<"Enter the time (in 24hr format):\n";
            cin>>a;
        }
        void checkHours()
        {
            if(a>18 && a<9)
            {
                cout<<"This is a not working hour.\n";
            }
            else
            {
                cout<<"This is a working hour.\n";
            }
        }
};
int main()
{
    compound c;
    c.input();
    c.checkHours();

    system("pause");
    return 0;
}