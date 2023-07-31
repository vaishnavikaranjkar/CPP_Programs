#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m.insert(pair<int,string>(1, "john")); //to insert key value pair data into the map

    m.insert(pair<int,string>(2,"beth")); 

    map<int,string>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    map<int, string>::iterator itr1;
    itr1=m.find(2);
    cout<<"Value found is: ";
    cout<<itr1->first<<" "<<itr1->second<<endl;

    system("pause");
}