#include <iostream>
using namespace std;
class Shape
{
    public:
        virtual float area()=0;
        virtual float perimeter()=0;
}; 
class Rectangle : public Shape
{
    private:
        float length, breadth;
    public:
        Rectangle(float l, float b)
        {
            length=l;
            breadth=b;
        }
        float area()
        {
            return length*breadth;
        }
        float perimeter()
        {
            return 2*(length+breadth);
        }
};
class Circle : public Shape
{
    private:
        float radius;
    public:
        Circle(float r)
        {
            radius=r;
        }
        float area()
        {
            return 3.14*radius*radius;
        }
        float perimeter()
        {
            return 2*3.14*radius;
        }
};
int main()
{
    Shape *s = new Rectangle(2.0,5.0);
    cout<<"Area of rectangle "<<s->area()<<endl;
    cout<<"Perimeter of rectangle "<<s->perimeter()<<endl;

    s=new Circle(5.0);
    cout<<"Area of circle "<<s->area()<<endl;
    cout<<"Perimeter of circle "<<s->perimeter()<<endl;

    system("pause");
    return 0;
}