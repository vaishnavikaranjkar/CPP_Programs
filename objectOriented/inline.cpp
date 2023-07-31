#include <iostream>
using namespace std;
class Test
{
    public:
        void func1()
        {
            cout<<"Inline function"<<endl;
        }
        void func2();
};
void Test::func2()
{
    cout<<"Non-inline function"<<endl;
}
int main()
{
    Test t;
    t.func1();
    t.func2();

    system("pause");
    return 0;
}