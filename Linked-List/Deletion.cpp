#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void deleteAtHead(node* &head)
{
    node* toDelete=head;
    head=head->next;
    delete toDelete; //To prevent memory Leak.
}

void Deletion(node* &head, int value)
{
    if(head == NULL) //When no values  are in the list or the list is empty.
    {
        return;
    }
    if(head->next == NULL) //When only one value in the list
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!= value) //If the node to be deleted is at nth position in the list then we are going to (n-1)th position in the list.
    {
        temp=temp->next;
    }
    node* toDelete=temp->next; //Node to be deleted.
    temp->next=temp->next->next; // Linking (n-1)th node with (n+1)th node in the list.
    delete toDelete; //To prevent memory Leak.
}

void insertAtTail(node* &head, int value)
{
    node* temp=head;
    node* n=new node(value);
    if(head == NULL)
    {
        head=n;
        return;
    }
    while(temp -> next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
   

int main()
{
    node* head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    display(head);
    Deletion(head,30);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}

//It is a good practice to put all of the corner cases.