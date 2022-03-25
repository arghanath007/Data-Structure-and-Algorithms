#include<bits/stdc++.h>

using namespace std;

void print(map<int,string> &m)
{
    cout<<"Size: "<<m.size()<<endl;
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    map<int, string> m; 
    m[1] = "one";
    m[5] = "five";
    m[10] = "ten";
    m[20] = "twenty";
    m[30] = "thirty";
    m.insert({2, "two"});
    // map<int, string>::iterator it; // Iterator of the map. Iterator should be the same type as the map. 
    // Iterating through the map.
    // for(it=m.begin();it!=m.end();++it) 
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // for(it=m.begin();it!=m.end();++it) // Normal map always sorts the keys in ascending order.
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // Easier way to print a map
    // for(auto &pr : m)
    // {
    //     cout<<pr.first<<" "<<pr.second<<endl;
    // }

    //* Find function. Time Complexity -> O(log n)

    // auto it = m.find(10);
    // if(it == m.end())
    // {
    //     cout<<"No value found"<<endl;
    // }
    // else 
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }


    auto it = m.find(100);
    if(it == m.end())
    {
        cout<<"No value found"<<endl;
    }
    else 
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    //* Erase function. Time Complexity -> O(log n)

    m.erase(10);

    auto ite = m.find(20);
    if(ite != m.end())
    {
        m.erase(ite);
    }

    //* Clear function. Clears the whole map.

    m.clear();

    print(m);
}




