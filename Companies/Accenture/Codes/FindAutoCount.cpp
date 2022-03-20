#include<bits/stdc++.h>

using namespace std;

int FindAutoCount(string n)
{
    int index, number, i, j, count,len;
    len = n.size();

    for (i = 0; i < len;i++)
    {
        index=n.at(i)- '0';
        count = 0;

        for (j = 0; j < len;j++)
        {
            number = n.at(j) - '0';
            if (number == i)
            {
                count++;
            }
        }
        if(index!=count)
        {
            return 0;
        }
    }
    return count;
}

int main()
{
    string n;
    cout << "Enter a string: ";
    getline(cin, n);
    cout<<"The result is: "<<FindAutoCount(n);
}