//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

class problems
{        
    public:
        float area;
        void arTri(float h,float b)
        {
            area = 0.500*h*b;
            cout<<"The area of triangle is: "<<area;
        }     
};
int main()
{
    problems p;
    p.arTri(56,3.022);
    
    system("pause");
    return 0;
}