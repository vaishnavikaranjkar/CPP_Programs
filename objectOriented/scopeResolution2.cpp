#include <iostream>
using namespace std;
//complete class with scope resolution
class Rectangle
{
    private:
        int length, breadth;
    public:
        Rectangle();//scoped functions
        Rectangle(int l, int b);
        Rectangle(Rectangle &r);
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        void setLength(int l);
        void setBreadth(int b);
        int area();
        int perimeter();
        bool isSquare();
        ~ Rectangle();
};
int main()
{
    Rectangle r1(10,10);
    cout<<"Area: "<<r1.area()<<endl;
    if(r1.isSquare())
    {
        cout<<"It is a square."<<endl;
    }
    cout<<"Perimeter: "<<r1.perimeter()<<endl;
    
    system("pause");
    return 0;
    //here the destructor should get executed after the main function ends but because of system pause, it does not get executed and it doesnt print rectangle destroyed.
}
Rectangle::Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length=l;
}
void Rectangle::setBreadth(int b)
{
    breadth=b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length==breadth;
}
Rectangle::~ Rectangle()
{
    cout<<"Rectangle destroyed"<<endl;
}