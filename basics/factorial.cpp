#include <iostream>
using namespace std;

class test
{
    public:
        int a, fact = 1, i;
        void calculate()
        {
            cout << "Insert any number: ";
            cin >> a;
            for (i = 1; i <= a; i++)
            {
                fact = fact * i;
            }
            cout << "\nThe factorial of given number is: " << fact<<endl;
        }
};

int main()
{
    test t;
    t.calculate();

    system("pause");
    return 0;
}