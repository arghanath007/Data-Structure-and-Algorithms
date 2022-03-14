#include<bits/stdc++.h>

using namespace std;


int FindCount(int array[], int len)
{
    int count =0,i,j;
    for (i = 0;i<len;i++)
    {
        int flag = 0;
        for (j = i+1; j < len;j++)
        {
            if(array[i]==array[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
        }
    }
    return count;
}
 
int main()
{
    int len;
    cout << "Enter the length: ";
    cin >> len;
    int array[len];
    cout<<"Enter the array: ";
    for (int i = 0; i < len;i++)
    {
        cin >> array[i];
    }
    int count=FindCount(array,len);
    cout<<"The distinct elements are: "<<count<<endl;
}