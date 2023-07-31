//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class leapYear
{
    public:
        int yr;
        void input()
        {
            cout<<"Enter year: ";
            cin>>yr;
        }
        void calc()
        {
            if(yr%4==0)
            {
                if(yr%100==0)
                {
                    if(yr%400==0)
                    {
                        cout<<yr<<" is a leap year.\n";
                    }
                    else
                    {
                        cout<<yr<<" is not a leap year.\n";
                    }
                }
                else
                {
                    cout<<yr<<" is a leap year.\n";
                } 
            }
            else
            {
                cout<<yr<<" is not a leap year.\n";
            }
        }
};
int main()
{
    leapYear l;
    l.input();
    l.calc();

    system("pause");
    return 0;
}