//to create a class student with roll no, name and marks. calculate the total marks and grade. 
#include <iostream>
using namespace std;

class Student
{
    private:
        int rn, phyMarks, chemMarks, mathMarks;
        int sum, avg;
        string name,grd;
    public:
        void getInfo()
        {
            cout<<"\nEnter the roll no. of student: ";
            cin>>rn;
            cout<<"\nEnter the name of student: ";
            cin>>name;
            cout<<"\nEnter marks of three subjects (PCM): ";
            cin>>phyMarks>>chemMarks>>mathMarks;
        }
        int calc()
        {
            sum=phyMarks+chemMarks+mathMarks;
            return sum;
        }
        string grade()
        {
            avg=sum/3;
            if(avg<40)
            {
                grd="C";
            }
            else if (avg>40 && avg<60)
            {
                grd="B";
            }
            else if(avg>60)
            {
                grd="A";
            }
            return grd;
        }
        void display()
        {
            cout<<"\nTotal marks of student "<<name<<" are: "<<sum<<endl;
            cout<<"Grade is: "<<grd<<endl;
        }
};
int main()
{
    Student s;
    
    s.getInfo();
    s.calc();
    s.grade();
    s.display();

    system("pause");
    return 0;
}