//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class binary
{
    public:
        int a ,i=0 ,j ,k;
        int binaryNum[32];
        int binaryNumR[32];

        void input()
        {
            cout<<"Enter any positive or negative number: \n";
            cin>>a;
        }
        void convertToBinary()
        {
            while(a>0)
            {
                binaryNum[i]=a%2;
                a=a/2;
                i++;
                for(j=0;j<i;j++)
                {
                    binaryNumR[j] = binaryNum[i - j - 1];
                }
            }
        }
        void printArray()
        {
            cout<<"The binary number is:\n";
            for(k = 0; k<j; k++)
            {
                cout<<binaryNumR[k];
            }
        }
};
int main()
{
    binary b;
    b.input();
    b.convertToBinary();
    b.printArray();

    system("pause");
    return 0;
}