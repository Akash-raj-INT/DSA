#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULl;

    }
    void inserthead(node* &head,int d)
    {
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
    void inter
}