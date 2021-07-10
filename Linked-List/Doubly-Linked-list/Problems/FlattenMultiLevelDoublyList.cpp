#include<bits/stdc++.h>

using namespace std;

class node
{
public: 
    int data;
    node* previous;
    node* next;
    node* child;
    node(int val)
    {
        data=val;
        next=NULL;
        previous=NULL;
    }
};

node* flatten(node* &head)
{
    for(node* h=head;h; h=h->next)
    {
        if(h->child)
        {
            node* next=h->next;
            h->next=h->child;
            h->next->previous=h;
            h->child=NULL;
            node* p=h->next;
            while(p->next)
            {
                p=p->next;
            }
            p->next=next;
            if(next)
            {
                next->previous=p;
            }
        }
    }
    return head;
}

// void insertAtHead(node* &head, int val)
// {
//     node* n=new node(val);
//     n->next=head;
//     if(head!=NULL)
//     {
//         head->previous=n;
//     }
//     head=n;
// }

// void insertAtTail(node* &head, int val)
// {
//     node* temp=head;
//     node* n=new node(val);
//     if(head == NULL)
//     {
//         insertAtHead(head, val);
//         return;
//     }
//     while(temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;
//     n->previous=temp;
// }

// void display(node* head)
// {   
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main()
// {
//     node* head=NULL;
//     insertAtTail(head,10);
//     insertAtTail(head,20);
//     insertAtTail(head,30);
//     insertAtTail(head,40);
//     insertAtTail(head,50);
//     insertAtTail(head,60);
//     insertAtTail(head,0);
//     insertAtTail(head,0);
//     insertAtTail(head,70);
//     insertAtTail(head,80);
//     insertAtTail(head,90);
//     insertAtTail(head,100);
//     insertAtTail(head,0);
//     insertAtTail(head,0);
//     insertAtTail(head,110);
//     insertAtTail(head,120);
//     display(head);
//     flatten(head);
//     display(head);
// }