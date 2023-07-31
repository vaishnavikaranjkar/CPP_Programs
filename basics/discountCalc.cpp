//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class discountCalc
{
    public:
        float amt, damt, temp;
        void input()
        {
            cout<<"Enter the amount: ";
            cin>>amt;
            calc();
        }
        void calc()
        {
            if(amt<=0)
            {
                cout<<"Enter valid amount.\n";
                input();  
            }
            else if(amt>=1 && amt<100)
            {
                cout<<"Discount: 0\n"<<"Final amount: "<<amt<<endl;
            }
            else if(amt>=100 && amt<500)
            {
                temp=0.1f*amt;
                damt=amt-temp;
                cout<<"Discount: 10%\n"<<"Final amount: "<<damt<<endl;
            }
            else if(amt>=500)
            {
                temp=0.2f*amt;
                damt=amt-temp;
                cout<<"Discount 20%\n"<<"Final amount: "<<damt<<endl;
            }
        }
};
int main()
{
    discountCalc d;
    d.input();

    system("pause");
    return 0;
}