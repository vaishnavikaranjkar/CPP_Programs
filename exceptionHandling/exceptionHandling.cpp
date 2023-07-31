//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

//exception handling is necessary. this is because, a function is supposed to produce two result. either the perfect result should be returned or if any error occurs, this function should convey error exception to the calling function. 

int main()
{
    int a=10, b=0, c;

    try
    {
        if(b==0)
        {
            throw 1; //exception e is 1
        }
        c=a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Dvision by zero "<<e<<endl;
    }
    system("pause");
    return 0;
}