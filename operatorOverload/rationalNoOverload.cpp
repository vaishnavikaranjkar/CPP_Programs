#include <iostream>
using namespace std;
//program to add fractions
class Rational
{
private:
    int p,q;
public:
    Rational(int p=0, int q=0)
    {
        this->p=p;
        this->q=q;
    }    
    Rational operator+(Rational r)
    {
        Rational temp;
        temp.p=(this->p*r.q)+(this->q*r.p);
        temp.q=this->q*r.q;
        return temp;
    }
    friend ostream operator<<(ostream &out, Rational &r)
    {
        cout<<r.p<<"/"<<r.q<<endl;
    }
};
int main()
{
    Rational r1(5,2), r2(20,3),r3;
    r3=r1+r2;
    cout<<r3<<endl;

    system("pause");
    return 0;
}