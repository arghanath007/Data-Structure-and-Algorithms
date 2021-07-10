#include<bits/stdc++.h>

using namespace std;

class MyHashSet
{
private:
    int prime;
    vector<list<int>> hashTable;

    int hash(int key)
    {
        return key % prime;
    }

    list<int>::iterator search(int key)
    {
        int h=hash(key);
        return find(hashTable[h].begin(), hashTable[h].end(), key);
    }

public:
    MyHashSet(): prime(10007), hashTable(prime){}

    void add(int key)
    {
        int h=hash(key);
        if(!contains(key))
        {
            hashTable[h].push_back(key);
        }
    }

    void remove(int key)
    {
        int h=hash(key);
        auto it=search(key);
        if(it!= hashTable[h].end())
        {
            hashTable[h].erase(it);
        }
    }

    bool contains(int key)
    {
        int h=hash(key);
        return search(key)!= hashTable[h].end();
    }
};



// int main()
// {
//     node* head=NULL;
//     insertAtTail(head,1);
//     insertAtTail(head,2);
//     insertAtTail(head,3);
//     insertAtTail(head,4);
//     insertAtTail(head,5);
//     insertAtTail(head,6);
//     Display(head);
// }