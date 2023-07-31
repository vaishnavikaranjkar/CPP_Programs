#include <iostream>
using namespace std;

class simpleInterest
{
    public:
        void calculate()
        {
            float P, r, t, SI;
            cout<<"Enter principle amount: ";
            cin>>P;
            cout<<"\nEnter rate of interest: ";
            cin>>r;
            cout<<"\nEnter time (in years): ";
            cin>>t;
            SI = P + (P*r*t);
            cout<<"\nSimple interest is: "<<SI;
        }
};
int main()
{
    simpleInterest s;
    s.calculate();

    system("pause");
    return 0;
}