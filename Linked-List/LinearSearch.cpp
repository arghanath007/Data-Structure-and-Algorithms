#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int v)
    {
        data=v;
        next=NULL;
    }
};

int linearSearch(node* &head, int value)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data == value)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

//This is for just filling the linked list with some data.
void insertAtTail(node* &head, int value)
{
    node* n=new node(value);
    if(head == NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=n; 
}

int main()
{
    int number;
    cout<<"Enter the value: ";
    cin>>number;
    node* head=NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 20);
    insertAtTail(head, 5);
    insertAtTail(head, 23);
    insertAtTail(head, 334);
    insertAtTail(head, 12);
    insertAtTail(head, 69);
    int result=linearSearch(head, number);
    if(result)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not found";
    }
}