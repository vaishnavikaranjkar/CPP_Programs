//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class switchCase
{
    public:
        int day;
        void input()
        {
            cout<<"Enter day number:\n";
            cin>>day;
        }
        void calc()
        {
            switch (day)
            {
            case 1 :
                cout<<"The day is Monday.\n";
                break;
            case 2 :
                cout<<"The day is Tuesday.\n";
                break;
            case 3 :
                cout<<"The day is Wednesday.\n";
                break;
            case 4 :
                cout<<"The day is Thursday.\n";
                break;
            case 5 :
                cout<<"The day is Friday.\n";
                break;
            case 6 :
                cout<<"The day is Saturday.\n";
                break;
            case 7 :
                cout<<"The day is Sunday.\n";
                break;
            default:
                cout<<"Enter number less than 7.\n";
                break;
            }
        }
};
int main()
{
    switchCase s;
    s.input();
    s.calc();

    system("pause");
    return 0;
}