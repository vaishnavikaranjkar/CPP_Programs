#include <iostream>
using namespace std;
class Base
{
private:
    int a;
public:
    int show(int a)
    {
        this->a=a;
        return a;
    }
    void display()
    {
        cout<<"Display of base"<<endl;
    }
};
class Derived:public Base
{
    //empty
};
int main()
{
    Derived d;
    
    d.display();
    cout<<d.show(12);

    system("pause");
    return 0;
}