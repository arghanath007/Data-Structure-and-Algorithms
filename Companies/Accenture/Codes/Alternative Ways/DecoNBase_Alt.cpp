#include <bits/stdc++.h>
// #include <cstring>
using namespace std;
char *DectoNBase(int n, int num)
{
    char *str = (char *)malloc(50 * sizeof(char));
    int i = 0;
    int r; // For taking the remainders
    while (num != 0)
    {
        r = num % n;
        if (r >= 0 && r <= 9) // For Digits
        {
            str[i] = (char)(r + 48);  // '0' -> 48 in ASCII, '53' -> 5 in ASCII.
        } 
        else if (r >= 10 && r <= 35) // For UpperCase Alphabets.
        {
             str[i] = (char)(r + 55);
        }
        i += 1;
        num /= n;
    }
    str[i] = '\0';
    // strrev(str);
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        swap(str[i],str[len-i-1]);
    }
    return str;
}
int main()
{
    int n, num;
    cout << "Enter the value of n and num: ";
    cin >> n >> num;
    cout << "Output: " << DectoNBase(n, num);
    return 0;
}



// ASCII Table -> https://www.asciitable.com/