//run c++ program -` ctrl+shift+b , then run main.exe from terminal
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
            a=1;
            b=2;
            count++;
        }
        static int getCount() //static member functions can only access static data members and not any other members. 
        {
            //a++; //not allowed
            return count;
        }
};
int Test::count=0;
int main()
{
    cout<<Test::getCount()<<endl;
    //same as
    Test t1;
    cout<<t1.getCount()<<endl;

    system("pause");
    return 0;
}