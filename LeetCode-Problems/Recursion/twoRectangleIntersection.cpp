#include<bits/stdc++.h>

using namespace std;

bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2)
{
    if (rec1[0] == rec1[2] || rec1[1] == rec1[3] || rec2[0] == rec2[2] || rec2[1] == rec2[3]) 
    {
        return false;
    }
    else
    {
        if(rec1[2] <= rec2[0] ||  rec2[2] <= rec1[0] ||  rec1[3] <= rec2[1] ||  rec2[3] <= rec1[1])  
        {
            return false;
        }
        return true;
    }
    
}

int main()
{
    int number;
    vector<int> rec1, rec2;
    cout<<"Enter the four coordinates each of the first vector: ";
    for(int i=1;i<=4;i++)
    {
        cin>>number;
        rec1.push_back(number);
    }
    cout<<"Enter the four coordinates each of the second vector: ";
    for(int i=1;i<=4;i++)
    {
        cin>>number;
        rec2.push_back(number);
    }
    if(isRectangleOverlap(rec1, rec2))
    {
        cout<<"Rectangles Overlap";
    }
    else
    {
        cout<<"Rectangles do not Overlap";
    }
}