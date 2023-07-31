//#define is a prepocessor or macros. macros are instructions to the compiler

#include <iostream>
using namespace std;

#define pi 3.1415
#define c cout //format is - #define variable_name value_of_the_variable
#define sqr(x) (x*x) //sqr is the function with parameter x and what it does is x*x
#define msg(x) #x //here #x takes the value passed in calling the function

#ifndef a 
    #define a 2
#endif// if a is not already defined, then defines a with a value of 2

#define max(x,y) (x>y?x:y) //if  is greater than y then it returns x else y

int main()
{
    cout<<pi<<endl;
    cout<<sqr(5)<<endl;
    cout<<msg(hello)<<endl;

    system("pause");
}