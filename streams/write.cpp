#include <iostream>
#include <fstream> //include this header

using namespace std;

int main()
{
    ofstream ofs("Test.txt"); //ofs is the object that is created of ofstream
    ofs<<"hey"<<endl;
    ofs.close();
    //if the file exists then it will use that file or else it will create new file with same name. if the existing file has some content, then it will be truncated and new data would be inserted.

    ofstream outfile("Test.txt", ios::app); //by append, the data will not truncated, the new data would be appended.

    ofstream outfile("Test.txt", ios::trunc); //file would be explicitly truncated

    outfile<<"hello"<<endl; //data is added into the file
    outfile<<25<<endl;

    outfile.close();
}