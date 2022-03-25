#include<bits/stdc++.h>

using namespace std;

void print(set<string> &s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    set<string> s;
    s.insert("hello");
    s.insert("world");
    s.insert("Hello");
    s.insert("Argha");

    auto it=s.find("Argha");

    if(it != s.end())
    {
        cout<<(*it)<<endl;
        s.erase(it);
    }
    else
    {
        print(s);
    }


}