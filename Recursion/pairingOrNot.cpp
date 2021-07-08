#include<bits/stdc++.h>

using namespace std;

int singleOrCoupleWaysCount(int size)
{
    if(size==0 || size==1 || size==2)
    {
        return size;
    }
    return (singleOrCoupleWaysCount(size-1) + singleOrCoupleWaysCount(size-2)* (size-1));

    //singleOrCoupleWaysCount(size-1) -> If we left the sizeth or nth person single 
    //singleOrCoupleWaysCount(size-2) * (size-1) -> If we didnt left the sizeth or nth person single as we have (n-1) ways to pair the people. We will add them as we want to find the total number of ways.
}
int main()
{
    int size;
    cout<<"Enter the number of people: ";
    cin>>size;
    int result=singleOrCoupleWaysCount(size);
    cout<<"The possible ways are: "<<result<<endl;
}

// 4C2 + 4C1 Ways. This is the mathemical formulae to find the total ways to arrange 4 people in pairs or leave them single.