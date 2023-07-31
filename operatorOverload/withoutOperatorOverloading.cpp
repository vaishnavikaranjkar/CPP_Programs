#include <iostream>
using namespace std;
//to add two complex numbers, without using concept of operator overloading

class Complex
{
    public:
        int real, imaginary;

        //here return type is complex class
        Complex add(Complex x) 
        {
            Complex temp;
            temp.real=real/*this is c1's real number*/+x.real;
            temp.imaginary=imaginary/*this is c1's imaginary number*/+x.imaginary;

            return temp;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.real=5, c1.imaginary=6;
    c2.real=3, c2.imaginary=4;

    c3=c1.add(c2); //here x is c2
    cout<<c3.real<<"+i"<<c3.imaginary<<endl;

    c3=c2.add(c1); //here x is c1
    cout<<c3.real<<"+i"<<c3.imaginary<<endl;

    system("pause");
    return 0;
} 