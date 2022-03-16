#include<bits/stdc++.h>

using namespace std;


int OperationChoices(int a,int b, int c)
{
    if(c==1)
    {
        return a+b;
    }
    else if(c==2)
    {
        return a-b;
    }
    else if(c==3)
    {
        return a*b;
    }
    else
    {
        return a/b;
    }
}

int main()
{
    int a,b,c;
    cout << "Enter three numbers: ";
    cin>>a>>b>>c;
    int result = OperationChoices(a,b,c);
    cout<<"The result: "<<result;
}