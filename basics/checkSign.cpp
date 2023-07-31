//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class sign
{
    public:
        int a, i=0 ,j ,k;
        int binaryNum[32];
        int binaryNumR[32];

        void input()
        {
            cout<<"Enter any positive or negative number: \n";
            cin>>a;
        }
        void checkSign()
        {
            if(a>0)
            {
                cout<<"The number is positive.\n";
            }
            else
            {
                cout<<"The number is negative.\n";
            }
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
            cout<<endl;
        }
        void checkBinarySign()
        {
            if(binaryNumR[0]==0)
            {
                cout<<"The binary number is positive.\n";
            }
            if(binaryNumR[0]==1)
            {
                cout<<"The binary number is negative.\n";
            }
        }
};
int main()
{
    sign s;
    s.input();
    s.checkSign();
    s.convertToBinary();
    s.printArray();
    s.checkBinarySign();

    system("pause");
    return 0;
}