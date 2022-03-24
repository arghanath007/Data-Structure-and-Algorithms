#include <bits/stdc++.h>
// #include <cstring>
using namespace std;
char *DectoNBase(int n, int num)
{
    // char *str = (char *)malloc(50 * sizeof(char));
    int length = 0;
    int rem; // For taking the remainders
    int no = num;
    while(no!=0)
    {
        rem=no%n;
        length++;
        no /= n;
    }
    // cout<<"\n length: "<<length<<endl;
    int i = 0;
    int r; // For taking the remainders
    char s[length+1];
    char *str = &s[0];
    while (num != 0)
    {
        r = num % n; // Storing the remainder.
        if (r >= 0 && r <= 9) // For Digits
        {
            str[i] = (char)(r + 48);  // '0' -> 48 in ASCII, '53' -> 5 in ASCII.
        } 
        else if (r >= 10 && r <= 35) // For UpperCase Alphabets. Since, 65-90 are ASCII for UpperCase Alphabets.
        {
             str[i] = (char)(r + 55);
        }
        i += 1;
        num /= n;
    }
    str[i] = '\0';
    // strrev(str);
    // int len=strlen(str);
    for(int i=0;i<length/2;i++)
    {
        swap(str[i],str[length-i-1]); // Reversing the string so it gives the desired output.
    }
    return str;
}
int main()
{
    int n, num;
    cout << "Enter the value of n and num: ";
    cin >> n >> num;
    cout << "Output: " << DectoNBase(n, num)<<endl;
    return 0;
}



// ASCII Table -> https://www.asciitable.com/