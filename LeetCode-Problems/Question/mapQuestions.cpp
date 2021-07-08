#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> maps;
    // pair<int, int> number;
    maps.insert({2,3});
    maps.insert({3,4});
    maps.insert({5,6});
    maps[6]=7;
    maps.insert(make_pair(4,5));
    // number= make_pair(5,6);
    cout<<"\nOrdered:\n";
    for(auto i : maps)
    {
        cout<<i.first<<" "<< i.second<<endl;
    }
    cout<<"\nUnordered:\n";
    unordered_map<int, int> mapsUnordered;
    // pair<int, int> number;
    mapsUnordered.insert({2,3});
    mapsUnordered.insert({3,4});
    mapsUnordered.insert({5,6});
    mapsUnordered[6]=7;
    mapsUnordered.insert(make_pair(4,5));

    for(auto i : mapsUnordered)
    {
        cout<<i.first<<" "<< i.second<<endl;
    }
}