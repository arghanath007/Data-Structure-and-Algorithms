#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> sets;
    int size,number;
    cin>>size;
    for(int i=0;i< size;i++)
    {
        cin>>number;
        sets.insert(number);
    }
    set<int>:: iterator itr;
    for(itr= sets.begin(); itr!= sets.end();itr++)
    {
        cout<<" "<< *itr;
    }
}

//Set -> It only contains unique elements/items in it. It also sorts the elements within itself and returns the sorted elements and the unique elements only. That why it return 6 elements in sorted order[99,100,101,108,111,116] and not the length of the string(leetcode) which is 8. So it has unique elements.
//https://www.cplusplus.com/reference/set/set/