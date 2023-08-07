//simple implementation of linked list havin two node
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

int main()
{
    Node *head; //head node of the linked list
    head=NULL;

    Node *temp= new Node(); //new keyword to allocate memory instead of malloc in c
    temp->data=2; //node one, data and its link
    temp->link=NULL;
    head=temp;

    cout<<temp->data<<endl<<temp->link;
    
    Node *temp1=head; //to get the adress of second last node to change its link value to the adress of new node
    while(temp1!=NULL) //traverse the whole list to look for address for second last node
    {
        temp1=temp1->link;
    }
    temp1->link=temp;

    temp=new Node(); //data and link for another node
    temp->data=4;
    temp->link=NULL;

    cout<<temp->data<<endl<<temp->link;

    system("pause");
    return 0;
}
