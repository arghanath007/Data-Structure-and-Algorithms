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

int length(node* head)
{
    node* temp=head;
    int l=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}

void intersect(node* &headOne,node* &headTwo, int pos)
{
    node* tempOne=headOne;
    pos--;
    while(pos--)
    {
        tempOne=tempOne->next;
    }
    node* tempTwo=headTwo;
    while(tempTwo->next!=NULL)
    {
        tempTwo=tempTwo->next;
    }
    tempTwo->next=tempOne;
}

int intersection(node* &headOne, node* &headTwo)
{
    int lenOne=length(headOne);
    int lenTwo=length(headTwo);

    int diff=0;
    node* ptrOne; //pointing to the longest linked list
    node* ptrTwo;//pointing to the other/shorter linked list.

    if(lenOne > lenTwo)
    {
        diff=lenOne-lenTwo;
        ptrOne=headOne;
        ptrTwo=headTwo;
    }
    else
    {
        diff=lenTwo-lenOne;
        ptrOne=headTwo;
        ptrTwo=headOne;
    }
    while(diff)
    {
        ptrOne=ptrOne->next;
        while(ptrOne==NULL)
        {
            return -1;
        }
        diff--;
    }
    while(ptrOne!=NULL && ptrTwo!=NULL)
    {
        if(ptrOne == ptrTwo)
        {
            return ptrOne->data;
        }
        ptrOne=ptrOne->next;
        ptrTwo=ptrTwo->next;
    }
    return -1;
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
    node* headOne=NULL;
    node* headTwo=NULL;
    insertAtTail(headOne, 1);
    insertAtTail(headOne, 2);
    insertAtTail(headOne, 3);
    insertAtTail(headOne, 4);
    insertAtTail(headOne, 5);
    insertAtTail(headOne, 6);
    insertAtTail(headTwo, 9);
    insertAtTail(headTwo, 10);
    intersect(headOne,headTwo,5);
    Display(headOne);
    Display(headTwo);
    cout<<intersection(headOne,headTwo)<<endl;
}

//Time complexity -> O(n) as 'n' is the size of the biggest/longest linked list among the two.