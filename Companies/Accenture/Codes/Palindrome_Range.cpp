#include<bits/stdc++.h>

using namespace std;

void palindrome_range(int n,int m)
{
    int palindrome[20];
    int number,rem,num,rev,j=0;
    for (int i = n; i <= m;i++)
    {
        number = i;
        num = i;
        rev = 0;
        while(number!=0)
        {
            rem=number%10;
            rev= rev * 10 + rem;
            number /= 10;
        }
        if(rev==num)
        {
            palindrome[j] = num;
            j++;
        }
    }
    palindrome[j]='\0';
    cout << "The Palindrome Numbers are: \n";
    for (int i = 0; palindrome[i]!= '\0';i++)
    {
        cout << palindrome[i] << ", ";
    }
}

int main()
{
    int n,m;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a number: ";
    cin>>m;
    palindrome_range(n,m);
}