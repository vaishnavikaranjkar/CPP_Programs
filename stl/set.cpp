#include <set>
#include <iostream>
using namespace std;

int main()
{
    set<int> v; //v is the oject that is created
    //we can specify the size as v(12) but by default it is 16

    v={10,12,45};
    v.insert(25);//adds 25 after 45
    v.insert(4545);//adds 4545 after 25

    for(int x:v) //this is iterator in stl. its a for each loop. the format means, int x in v
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //another iterator method
    set<int>::iterator itr=v.begin(); //iterator is the class. itr is the object of iterator. begin will start the iterator at beginning of the collection. begin method is available for all containers.
    for(itr=v.begin();itr!=v.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    //iterator is like a pointer to the elements in vector

    system("pause");
}