#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};

node* reverseList(node* &head)
{
    node* prevPtr=NULL;
    node* currentPtr=head;
    node* nextPtr;
    while(currentPtr!=NULL)
    {
        nextPtr=currentPtr->next;
        currentPtr->next=prevPtr;

        prevPtr=currentPtr;
        currentPtr=nextPtr;
    }
    return prevPtr; //New head

}

node* recursionReverseList(node* &head)
{
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    node* newHead=recursionReverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;
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
    display(head);

    // node* newHead=reverseList(head);
    // display(newHead);
    node* recursivenewHead=recursionReverseList(head);
    display(recursivenewHead);
    return 0;
}

//Time complexity -> O(n)