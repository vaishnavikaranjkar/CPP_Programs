//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

//template function is used when we have to define a single function so that it can be used with different data types.
//here T can be replaced as any data type like int, float.

template <class T> 
T maxim(T x, T y)
{
    if(x>y)
    {
        return x;
    }
    else return y;
}
int main()
{
    int c=maxim(10,5);
    float d=maxim(1.2f,3.5f);
    cout<<c<<endl<<d<<endl;

    //or

    cout<<maxim<int>(10,6)<<endl<<maxim<float>(1.2,3.4)<<endl;

    system("pause");
    return 0;
}