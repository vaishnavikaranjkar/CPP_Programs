#include <iostream>
using namespace std;

int main()
{
    cout<<"a"<<endl; // endl is a manipulator
    //manipulators are used to format streams

    cout<<hex<<163<<endl; //hex is a manipulator. 163 will be displayed in hexadecimal
    //manipulators - 
    //integer manipulators : oct, dec, float, fixed, scientific

    cout<<//set(10)<<"hello"<<endl;
    //hello will be displayed in 10 places
    //other manipulators - 
    //set(), left, right, ws

    system("pause");
}