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

void deleteNode(node* head) // Since the pointer is not passed as reference so a mere copy of the pointer is passed to the function.
{
    node* temp=head;
    auto next=temp->next;
    *temp= *next; //Copying the 'next' node into the 'temp' node
    delete next;
}

void deleteNodeReference(node* &head)
{
    node* temp=head;
    node* toDelete= temp;
    temp=temp->next;
    delete toDelete;
    head=temp;
}

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void Display(node* head)
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
    //For the pass by value function. So in here 'head' is send as a copy of the original 'head' in the main function.

    // insertAtTail(head,10);
    // insertAtTail(head,20);
    // insertAtTail(head,30);
    // deleteNode(head);
    // Display(head);
    // insertAtTail(head,40);
    // Display(head);
    // deleteNode(head);
    // Display(head);

    //For the pass by reference function. So in here 'head' is send as a copy of the original 'head' in the main function.

    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    Display(head);
    deleteNodeReference(head);
    Display(head);
    insertAtTail(head,40);
    Display(head);
    deleteNodeReference(head);
    Display(head);
}

//https://leetcode.com/problems/delete-node-in-a-linked-list/discuss/65455/1-3-lines-C%2B%2BJavaPythonCCJavaScriptRuby