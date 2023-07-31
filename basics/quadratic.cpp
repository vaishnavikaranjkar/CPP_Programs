//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
#include <math.h>
using namespace std;

class problems
{        
    public:
        int num1, num2, num3, r1, r2;
        void quadratic()
        {
            cout<<"Enter three values - a,b,c \nReferenced with ax^2+bx+c=0 \n";
            cin>>num1>>num2>>num3;
            r1 = ((-num2)+(sqrt((num2^2)-(4*num1*num3))))/(2*num1);
            r2 = ((-num2)-(sqrt((num2^2)-(4*num1*num3))))/(2*num1);
            cout<<"The roots of the quadratic equation are: \n"<<r1<<"\n"<<r2;
        } 
};
int main()
{
    problems p;
    p.quadratic();

    system("pause");
    return 0;
}
