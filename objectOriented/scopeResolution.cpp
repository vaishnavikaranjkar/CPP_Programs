#include <iostream>
using namespace std;
class rect
{
    private:
        int l,b;
    public:
        int area(int &l, int &b)
        {
            return l*b;
        }
        int perimeter();
};//functions should not be defined inside a class. if they are, they should not have any complex logic. If a function is defined inside a class, it is called inline function
int rect::perimeter() //return_type class_name scope_resolution(::) function_name
//this function does not get replaces at the place of main function call, rather the flow of program jumps from main function to the function definition. 
{
    return 2*(l+b); 
}
int main()
{    
    rect r;
    
    int l=5, b=6;
    cout<<r.area(l,b)<<endl;
    cout<<r.perimeter()<<endl;
    
    system("pause");
    return 0;
}