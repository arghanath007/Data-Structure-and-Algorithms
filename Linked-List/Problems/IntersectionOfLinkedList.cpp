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

node* intersectionPoint(node* &headOne, node* &headTwo)
{
    node* ptrOne=headOne;
    node* ptrTwo=headTwo;
    if(ptrOne==NULL && ptrTwo==NULL)
    {
        return NULL;
    }
    while(ptrOne!=NULL && ptrTwo!=NULL && ptrOne!=ptrTwo)
    {
        ptrOne=ptrOne->next;
        ptrTwo=ptrTwo->next;

        if(ptrOne == ptrTwo)
        {
            return ptrOne;
        }

        if(ptrOne == NULL)
        {
            ptrOne=headTwo;
        }
        if(ptrTwo == NULL)
        {
            ptrTwo=headOne;
        }
    }
    return ptrTwo;
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
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    display(head);
}