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

//More compact and shorter way.
int binaryToIntegerConversion(node* &head)
{
    int sum=0;
    node* temp=head;
    while(temp)
    {
        sum=sum*2 + temp->data;
        temp=temp->next;
    }
    return sum;
}

//This is what my solution/logic of the problem. 
node* reverseList(node* &head)
{
    node* previousPtr=NULL;
    node* currentPtr=head;
    node* nextPtr;
    while(currentPtr!=NULL)
    {
        nextPtr=currentPtr->next;
        currentPtr->next=previousPtr;
        previousPtr=currentPtr;
        currentPtr=nextPtr;
    }
    return previousPtr;
}

int binaryToInteger(node* &head)
{
    node* revHead=reverseList(head);
    node* temp=revHead;
    int sum=0,j=0;
    while(temp!=NULL)
    {
        int i=pow(2,j);
        sum+=(temp->data) * i;
        j++;
        temp=temp->next;
    }
    return sum;
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
    insertAtTail(head,1);
    insertAtTail(head,0);
    insertAtTail(head,1);
    insertAtTail(head,1);
    Display(head);
    // node* newHead=reverseList(head);
    // Display(newHead);
    cout<<binaryToInteger(head)<<"\n";
    // cout<<binaryToIntegerConversion(head)<<"\n";
}