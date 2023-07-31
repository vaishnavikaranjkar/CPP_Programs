//build a base class employee and derived two classes from it, full time emp and part time emp

#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string emp_name;
public:
    Employee(int e, string n)
    {
        emp_id=e;
        emp_name=n;
    }
    int getEmp()
    {
        return emp_id;
    }
    string getName()
    {
        return emp_name;
    }
};
class FTemp:public Employee
{
private:
    int sal;
public:
    FTemp(int e, string n, int s):Employee(e, n) //constructor derived from another constructor
    {
        sal=s;
    }
    int getSal()
    {
        return sal;
    }
};
class PTemp:public Employee
{
private:
    int wage;
public:
    PTemp(int e, string n, int w):Employee(e, n)
    {
        wage=w;
    }
    int getWage()
    {
        return wage;
    }
};
int main()
{
    FTemp f(101, "Mr. A", 10000);
    PTemp p(201, "Mr. B", 750);

    cout<<"Salary of "<<f.getName()<<" is "<<f.getSal()<<endl;
    cout<<"Salary of "<<p.getName()<<" is "<<p.getWage()<<endl;

    system("pause");
    return 0;
}