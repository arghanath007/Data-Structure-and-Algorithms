#include<bits/stdc++.h>

using namespace std;

bool myCompare(pair<int, int> pairOne, pair<int, int> pairTwo)
{
    return pairOne.first < pairTwo.first;
}

int main()
{
    int size,element;
    cout<<"Enter the size: ";
    cin>>size;
    vector<int> array;
    vector<pair<int, int>> pairs;
    cout<<"Enter the elements: ";
    for(int i=0;i< size;i++)
    {
        cin>>element;
        array.push_back(element);
    }
    for(int i=0;i< size;i++)
    {
        pairs.push_back(make_pair(array[i],i));
    }
    sort(pairs.begin(), pairs.end(), myCompare);

    for(int i=0; i< size;i++)
    {
        array[pairs[i].second]=i;
    }
    cout<<endl;
    for(int i=0; i< size;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}