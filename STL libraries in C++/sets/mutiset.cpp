#include<bits/stdc++.h>

using namespace std;

void print(multiset<string> &s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    multiset<string> s;
    s.insert("hello");
    s.insert("world");
    s.insert("Hello");
    s.insert("Argha");
    s.insert("Argha");

    auto it=s.find("nath");

    if(it != s.end())
    {
        cout<<(*it)<<endl;
        s.erase(it); // This deletes the iterator which is pointing to "nath" in the set.
    } 
    else
    {
        s.erase("Argha"); // This deletes all the occurances of Argha in the set
        print(s);
    }
    
}