#include <iostream>
using namespace std;
//to add two complex numbers, by using concept of operator overloading

class Complex
{
    public:
        int real, imaginary;
        //telling what should be the default values of the objects created
        Complex(int r=0, int i=0) 
        {
            real = r;
            imaginary = i;
        }
        //here return type is complex class
        //by using keyword operator and then assigning + sign (it can be any symbol)
        Complex operator +(Complex x) 
        {
            Complex temp; //created an object of class inside the class
            temp.real=real/*this is c1's real number*/+x.real;
            temp.imaginary=imaginary/*this is c1's imaginary number*/+x.imaginary;

            return temp;
        }
};
int main()
{
    Complex c1(3,5), c2(5,4), c3;
    
    c3=c1+c2; //here x is c2
    cout<<c3.real<<"+i"<<c3.imaginary<<endl;

    c3=c2+c1; //here x is c1
    cout<<c3.real<<"+i"<<c3.imaginary<<endl;
    
    system("pause");
    return 0;
} 