#include <iostream> //some error in the program
using namespace std;

class MyException : public exception //we can also create our own exception class which may or may not be inherited from built-in cpp class - exception
{
};
int division(int x,int y) throw(MyException) //what throw is returning, here MyException class
{
    if(y==0)
    {
        throw MyException();
    }
    return x/y;
}
int main() 
{
    int a=13, b=0, c;
    try
    {
        if(b==0)
        {
            //throw 1.5; //a double value is allowed
            //throw 1.25f; // a float value is allowed
            //throw string("div by 0"); //allowed for a string
            throw MyException(); //allowed for a constructor of a class
        }
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(MyException e)
    {
        cout<<"div by 0 not allowed "<<e<<endl;
    }
    
    system("pause");
}