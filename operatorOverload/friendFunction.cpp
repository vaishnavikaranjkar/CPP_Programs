#include <iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        Complex(int r=0, int i=0)
        {
            real=r;
            imaginary=i;
        }
        void display()
        {
            cout<<real<<"+i"<<imaginary<<endl;
        }
        //to have the operator as  a friend
        friend Complex operator +(Complex c1, Complex c2);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imaginary=c1.imaginary+c2.imaginary;
    return temp;    
}

int main()
{
    Complex c1(4,5), c2(3,5), c3;
    c3=c1+c2;
    //this is same as
    c3=operator+(c1,c2);
    c3.display();

    system("pause");
    return 0;
}