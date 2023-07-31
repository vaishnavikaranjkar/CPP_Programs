#include <iostream>
using namespace std;


template<class T>
class Stack
{
    private:
        T *stk; //pointer to an array for storing elements
        int top, size;
    public:
        Stack(int sz)
        {
            size=sz;
            top=-1;
            stk=new T[size];
        }
        void push(T x);
        T pop();
};

template <class T>
void Stack<T>::push(T x) //format for scope resolution: return_type class_name::func_name()
{
    if(top==size-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        top++;
        stk[top]=x;
    }
}

template <class T>
T Stack<T>::pop()
{
    T x=0;
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        x=stk[top];
        top--;
    }
    return x; 
}
int main()
{
    Stack<int> s(10); //the whole class became integer type
    s.push(12);
    s.push(4);

    system("pause");
}