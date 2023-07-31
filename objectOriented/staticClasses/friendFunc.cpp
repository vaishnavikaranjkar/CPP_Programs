#include <iostream>
using namespace std;
class Test
{
    private:
        int a=1;
    protected:
        int b=2;
    public:
        int c=3;

    friend void func();// this friend keyword helps to access the members that are private and protected to outside classes
};
void func()
{
    Test t;
    cout<<t.a<<t.b<<t.c<<endl;
}
int main()
{
    func();
    system("pause");
    return 0;
}