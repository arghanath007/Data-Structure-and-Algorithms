#include<bits/stdc++.h>

using namespace std;

struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
{
    //Done without creating a new List node
    // ListNode dummy(INT_MIN);
    // ListNode *tail = &dummy;
    
    // while (l1 && l2) {
    //     if (l1->val < l2->val) {
    //         tail->next = l1;
    //         l1 = l1->next;
    //     } else {
    //         tail->next = l2;
    //         l2 = l2->next;
    //     }
    //     tail = tail->next;
    // }

    // tail->next = l1 ? l1 : l2;
    // return dummy.next;

    //Done by creating a new List node.
    ListNode* l3=new ListNode(0);
    ListNode* l4;
    l4=l3;
    if(!l1)
    {
        return l2;
    }
    if(!l2)
    {
        return l1;
    }
    while(l1 && l2)
    {
        if(l1->val < l2->val)
        {
            l3->next= new ListNode(l1->val);
            l1=l1->next;
        }
        else
        {
            l3->next= new ListNode(l2->val);
            l2=l2->next;
        }
        l3=l3->next;
    }
    l3->next=l1? l1:l2;
    return l4->next;
}

int main()
{
    int sizeOne, sizeTwo,numberOne,numberTwo;
    cout<<"Enter the size of the two lists: ";
    cin>>sizeOne>>sizeTwo;
    ListNode* first=new ListNode[sizeOne];
    ListNode* second=new ListNode[sizeTwo];
    ListNode* result=new ListNode[sizeOne + sizeTwo];
    cout<<"Enter the values of the 1st list: ";
    for(int i=0;i< sizeOne;i++)
    {
        cin>>numberOne;
        first[i].val=numberOne;
    }
    cout<<"Enter the values of the 2nd list: ";
    for(int i=0;i< sizeTwo;i++)
    {
        cin>>numberTwo;
        second[i].val=numberTwo;
    }
    cout<<"\nPrinting:\n";
    for(int i=0;i< sizeOne;i++)
    {
        cout<<first[i].val<<" ";
    }
    cout<<"\n2nd List\n";
    for(int i=0;i< sizeTwo;i++)
    {
        cout<<second[i].val<<" ";
    }
    cout<<"\nThe result is:\n";
    for(int i=0;i<(sizeOne + sizeTwo);i++)
    {
        result= mergeTwoLists(first,second);
        cout<<result[i].val<<" ";
    }
}