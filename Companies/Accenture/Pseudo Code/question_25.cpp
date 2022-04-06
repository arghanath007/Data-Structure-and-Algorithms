#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0, b = 1, c;
    for (c = 1; c <= 3;c++)
    {
        a = a + b;
        b = a + 1;
        cout << a;
    }
}