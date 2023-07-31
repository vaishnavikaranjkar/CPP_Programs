//run c++ program -` ctrl+shift+b , then run file_name.exe from terminal
#include <iostream>
using namespace std;

class getLine
{
    public:
    string name;
        void getline_func()
        {
            cout<<"Enter your name: \n";
            getline(cin,name); //to get full name of the user (which includes spaces)
            cout<<"hello "<<name<<endl;
        }
};
int main()
{
    getLine g;
    g.getline_func();
    
    system("pause");
    return 0;
}