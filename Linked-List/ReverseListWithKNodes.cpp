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

node* reverseKNodes(node* &head, int k)
{   
    node* prevPtr=NULL;
    node* currentPtr=head;
    node* nextPtr;
    int count=0;
    while(currentPtr!=NULL && count<k) //Reverse of the 1st 'k' nodes
    {
        nextPtr=currentPtr->next;
        currentPtr->next=prevPtr;
        prevPtr=currentPtr;
        currentPtr=nextPtr;
        count++;
    }
    if(nextPtr!=NULL)
    {
        head->next= reverseKNodes(nextPtr,k);
    }
    return prevPtr;
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
    while(temp->next!= NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    int k=2;
    node* result=reverseKNodes(head, k);
    display(result);
    return 0;
}

//Time complexity -> O(n).