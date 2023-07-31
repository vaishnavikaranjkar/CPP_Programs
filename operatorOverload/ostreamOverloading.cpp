#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, imaginary;
    public:
        Complex(int r=0, int i=0)
        {
            real=r;
            imaginary=i;
        }
        
        friend ostream & operator<<(ostream &out, Complex &c)
        {
            cout<<c.real<<"+i "<<c.imaginary<<endl;
            return out;
        }
};
int main()
{ 
    Complex c(5,6);

    cout<<c<<endl;
    //same as
    operator<<(cout,c);

    system("pause");
    return 0;
}
