# include<bits/stdc++.h>

using namespace std;


int MaxExponents(int a, int b)
{
    int max=0,num=0,count;
    for (int i = a; i <= b;i++)
    {
        num = i;
        count = 0;
        while(num%2==0)
        {
            num/=2;
            count++;
        }
        if(count>max)
            max=count;
    }
    return max;
}

int main()
{
    int a, b;
    cout<<"Enter two numbers: ";
    cin >> a >> b;
    cout <<"The result is: "<< MaxExponents(a, b);
    return 0;
}