#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a = 8, b = 4, c = 10;
    for (int c = 4; c <= 7;c++)
    {
        a = a + a;
        if((a+b) > (c-a))
        {
            a = (4 + 11) + b;
            b = (c + b) + a;
        }
    }
    cout << a + b<<endl;
    int p_p = 2,_7=2;
    cout << p_p<<endl<<_7;
}