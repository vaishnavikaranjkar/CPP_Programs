#include <iostream>
using namespace std;
//this pointer is used to remove the ambiguity between variables in a class.
class Test
{
    private:
        int var1, var2;
    public:
        Test(int var1, int var2)
        {
            this->var1=var1;//this->var1 is the private variable declared in the class.
            this->var2=var2;
        }
        void display()
        {
            cout<<var1<<endl<<var2<<endl;
        }
};
int main()
{
    Test t(2,5);
    t.display();
    system("pause");
    return 0;
}