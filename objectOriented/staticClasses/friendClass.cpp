#include <iostream>
using namespace std;

class Test2; // to declare class before friend keyword

class Test1
{
    private:
        int a=10;
    friend Test2; //test2 can access private and protected members of test1 class
};
class Test2
{
    public:
        Test1 t1;
        void func()
        {
            cout<<t1.a<<endl;
        }
};
int main()
{
    Test2 t2;
    t2.func();
    system("pause");
    return 0;
}