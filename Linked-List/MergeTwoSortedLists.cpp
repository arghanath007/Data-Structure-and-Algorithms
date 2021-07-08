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

node* merge(node* &headOne, node* &headTwo)
{
    node* ptrOne=headOne;
    node* ptrTwo=headTwo;
    node* dummyNode=new node(-1); //This is a node and not a pointer.
    node* ptrThree=dummyNode;

    while(ptrOne!=NULL && ptrTwo!=NULL)
    {
        if(ptrOne->data < ptrTwo->data)
        {
            ptrThree->next=ptrOne;
            ptrOne=ptrOne->next;
        }
        else
        {
            ptrThree->next=ptrTwo;
            ptrTwo=ptrTwo->next;
        }
        ptrThree=ptrThree->next;
    }

    while(ptrOne!=NULL)
    {
        ptrThree->next=ptrOne;
        ptrOne=ptrOne->next;
        ptrThree=ptrThree->next;
    }
    while(ptrTwo!=NULL)
    {
        ptrThree->next=ptrTwo;
        ptrTwo=ptrTwo->next;
        ptrThree=ptrThree->next;
    }

    return dummyNode->next;
}

node* recursiveMergeLists(node* headOne, node* headTwo)
{
    if(headOne==NULL)
    {
        return headTwo;
    }
    if(headTwo==NULL)
    {
        return headOne;
    }
    node* result;
    if(headOne->data < headTwo->data)
    {
        result=headOne;
        result->next=recursiveMergeLists(headOne->next, headTwo);
    }
    else
    {
        result=headTwo;
        result->next=recursiveMergeLists(headOne, headTwo->next);
    }
    return result;
}


int main()
{
    node* headOne=NULL;
    node* headTwo=NULL;
    //Both of the linked list should be sorted otherwise it would work.
    insertAtTail(headOne,1);
    insertAtTail(headOne,3);
    insertAtTail(headOne,7);
    insertAtTail(headOne,89);
    insertAtTail(headTwo,2);
    insertAtTail(headTwo,4);
    insertAtTail(headTwo,6);
    insertAtTail(headTwo,10);
    insertAtTail(headTwo,69);
    Display(headOne);
    Display(headTwo);
    // node* newHead=merge(headOne,headTwo);
    // Display(newHead);
    node* newRecursiveHead=recursiveMergeLists(headOne,headTwo);
    Display(newRecursiveHead);
}

//Time complexity -> O(n+m) 'n' is the size of one of the linked list and 'm' is the size of the other linked list.