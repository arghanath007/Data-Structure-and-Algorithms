# include<bits/stdc++.h>

using namespace std;


int MaxExponents(int a, int b)
{
    int max=0,num=0,count,pos=0;
    for (int i = a; i <= b;i++)
    {
        num = i;
        count = 0;
        while(num%2==0 && num!=0)
        {
            num/=2;
            count++;
        }
        if(count>max)
        {
            max=count;
            pos = i;
        }
        
    }
    return pos;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin >> a >> b;
    cout <<"The result is: "<< MaxExponents(a, b);
    return 0;
}