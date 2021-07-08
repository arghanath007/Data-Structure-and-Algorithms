#include<bits/stdc++.h>

using namespace std;


int pathsCount(int start, int end)
{
    if(start == end)
    {
        return 1;
    }
    if(start > end)
    {
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++)
    {
        count+=pathsCount(start + i, end);
    }
    return count;
}
int main()
{
    int starting, ending;
    cout<<"Enter the starting and ending position: ";
    cin>>starting>>ending;
    int result= pathsCount(starting, ending);
    if(result == 1)
    {
        cout<<"Both the starting and ending position are the same. The starting is: "<<starting<<"\t The ending is: "<<ending<<endl;
    }
    else if(result == 0)
    {
        cout<<"Starting position is bigger than ending position. The starting is: "<<starting<<"\t The ending is: "<<ending<<endl;
    }
    else
    {
        cout<<"The possible paths are: "<<result<<endl; 
    }
}