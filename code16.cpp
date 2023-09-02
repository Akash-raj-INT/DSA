#include<iostream>

using namespace std;

void print_data(struct node *head)
{
    if(head==NULL)
    cout<<"lined list is empty";
struct node *ptr=NULL;
ptr=head;
while(ptr!=NULl){
    cout<<ptr->data;
    ptr=ptr->link;
}
}