#include<bits/stdc++.h>

using namespace std;

int main()
{
    int low=1, high=INT_MAX;
    int result= (low + high)/2; // This returns '-1073741824' 
    cout<<result<<endl;
    result= low + (high-low)/2;
    cout<<result<<endl;
}