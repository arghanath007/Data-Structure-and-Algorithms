#include<bits/stdc++.h>

using namespace std;


bool checkRecord(string record) 
{
    int flag=0, absent=0;
    for(int i=0; record[i] != '\0';i++)
    {
        if(record[i] == 'A')
        {
            absent++;
        }
    }
    for(int i=0; record[i] != '\0';i++)
    {
        if(record[i] == 'L' && record[i+1] == 'L' && record[i+2] =='L')
        {
            flag=1;
            break;
        }
    }
    if(flag == 0 && absent <2)
    {
        return true;
    }
    return false;
}
int main()
{
    string str;
    cout<<"Enter the attendance of the student: ";
    getline(cin,str);
    if(checkRecord(str))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}