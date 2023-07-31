#include <iostream>
using namespace std;
class Test
{
    private:
        int a,b;
    public:
        static int count;
        Test()
        {
            a=10;
            b=20;
            count++;
        }
};
int Test::count=0; //static members must be declared outside the class. But as they would be referred as global variables, we give scope resolution as Test::count.

int main()
{
    Test t1;
    Test t2;
    //here two objects are created for the class test. therefore, the members (a,b,count) must be having allocated memory twice. but, as count variable is declared static, it has memory allocated only once. 
    
    //all objects share the same memory allocation of that data member

    cout<<t2.count<<endl;
    //same as
    cout<<t1.count<<endl;
    //same as
    cout<<Test::count<<endl;

    system("pause");
    return 0;
}