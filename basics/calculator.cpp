//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class calculator
{
    public:
        int temp;
        int a,b,result;
        void input()
        {
            cout<<"Choose an option: (1,2,3,4)\n1. Evaluate summation.\n2. Evaluate difference.\n3. Evaluate multiplication.\n4. Evaluate division.\n";
            cin>>temp;
            calc();
        }
        void calc()
        {
            switch (temp)
            {
            case 1 :
                cout<<"Enter first number: ";
                cin>>a;
                cout<<"Enter second number: ";
                cin>>b;
                result=a+b;
                cout<<"The sum is: "<<result<<endl;
                break;
            case 2 :
                cout<<"Enter first number: ";
                cin>>a;
                cout<<"Enter second number: ";
                cin>>b;
                result=a-b;
                cout<<"The difference is: "<<result<<endl;
                break;
            case 3 :
                cout<<"Enter first number: ";
                cin>>a;
                cout<<"Enter second number: ";
                cin>>b;
                result=a*b;
                cout<<"The multiplication is: "<<result<<endl;
                break;
            case 4 :
                cout<<"Enter first number: ";
                cin>>a;
                cout<<"Enter second number: ";
                cin>>b;
                result=a/b;
                cout<<"The division is: "<<result<<endl;
                break;
            default:
                cout<<"Choose a valid number.\n";
                input();
                break;
            }
        }
};
int main()
{
    calculator c;
    c.input();
    c.calc();

    system("pause");
    return 0;
}