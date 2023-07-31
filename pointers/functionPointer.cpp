//run c++ program -` ctrl+shift+b , then run main.exe from terminal
#include <iostream>
using namespace std;

// void func()
// {
//     string a = "Hello World!\n";
//     cout<<a<<endl;
// }
// int main()
// {
//     //return_type (*variable_name) (parameters)

//     void (*fp)(); //declaring pointer to a function
//     fp=func; //initialization of pointer
//     (*fp)(); //calling the function pointer

//     system("pause");
//     return 0;
// }

int max(int x, int y)
{
    return x>y?x:y; //if x is greater than y then return x otherwise y
}
int min(int x, int y)
{
    return x<y?x:y;
}

int main()
{
    int (*fp1)(int,int);
    int (*fp2)(int,int);

    fp1=max;
    fp2=min;

    cout<<(*fp1)(10,6);
    cout<<(*fp2)(32,12);

    //or this can also be done as follows by using a single variable

    int (*fp)(int,int);
    fp=max;
    cout<<(*fp)(10,3);

    fp=min;
    cout<<(*fp)(21,5);

    system("pause");
    return 0;
}