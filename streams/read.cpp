#include <fstream>
#include <iostream>
using namespace std;

//already existing file named test1.txt
int main()
{
    ifstream infile; //object created
    infile.open("test1.txt"); //ios::in for reading, ios::out for writing. but this already in fstream. so we dont need to use them

    if(!infile) //to check whether the file is already open
    //will return true if it not open
    {
        cout<<"file is not open"<<endl;
    }
    //same as
    if(!infile.is_open())
    {
        cout<<"file cannot be opened"<<endl; 
    }

    string str;
    int x;

    infile>>str; //infile is reading a string from the file
    infile>>x; //infile is reading an integer from a file

    cout<<str<<" "<<x<<endl;

    if(infile.eof()) //to check if we reached end of the file
    {
        cout<<"Reached end of file"<<endl;
    }
    infile.close();

    system("pause");
}