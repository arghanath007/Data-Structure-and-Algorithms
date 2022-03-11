#include<bits/stdc++.h>

using namespace std;

int CountSpecificNumbers(int m, int n)
{
    int count=0;
    if(m>n)
    {
        return -1;
    }
    for (int i = m; i <= n;i++)
    {
        int number = i, flag=1;
        while(number!=0)
        {
            int r=number%10;
            number /= 10;
            if(r== 1 || r==4 || r==9)
            {
                continue;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int m,n;
    cout<<"Enter two numbers"<<endl;
    cin >> m >> n;
    int result = CountSpecificNumbers(m, n);
    cout<<"The count is: "<<result<<endl;
    return 0;
}