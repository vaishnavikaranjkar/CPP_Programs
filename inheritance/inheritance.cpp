#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;
public:
    Rectangle(int l=0, int b=0)
    {
        length=l;
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void display()
    {
        cout<<length<<endl<<breadth<<endl;
    }
};
class Cuboid : public Rectangle //class cuboid extends class rectangle
{
private:
    int height;
public:
    Cuboid(int l=0, int b=0, int h=0)
    {
        height=h;
        //to define the length=l and breadth=b, we can't directly access those variables directly from rectangle class
        //so we have to call the set method from rectangle class
        setLength(l);
        setBreadth(b);
    }
    int getHeight()
    {
        return height;
    }
    void setHeight(int h)
    {
        height=h;
    }
    int volume()
    {
        //we cannot directly access length and breadth from rectangle class so we call the getLength and getBreadth methods.
        return getLength()*getBreadth()*height;
    }
};
int main()
{
    Cuboid c(10,5,3);
    cout<<c.getLength()<<endl<<c.getBreadth()<<c.volume()<<endl<<c.area()<<endl<<c.perimeter()<<endl;
    
    system("pause");
    return 0;
}