#include <iostream>
using namespace std;
int OperationBinaryString(char *str)
{
    char ch = str[0];
    // Checking if str is null or not
    if (str == NULL)
        return -1;
    else
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == 'A')
            {
                if (ch == '1' && str[i + 1] == '1')
                    ch = '1';
                else
                    ch = '0';
            }
            else if (str[i] == 'B')
            {
                if (ch == '0' && str[i + 1] == '0')
                    ch = '0';
                else
                    ch = '1';
            }
            else if (str[i] == 'C')
            {
                if (ch != str[i + 1])
                    ch = '1';
                else
                    ch = '0';
            }
            else
                continue;
        }
        return ch;
    }
}
int main()
{
    string s;
    cout << "Enter the binary string: ";
    getline(cin, s);
    int len = s.size();
    char *str = &s[0];
    // char str = s[0];

    // Calling the function and showing the output
    cout << "Output: " << (char)OperationBinaryString(str);
    // cout << "Output: " << (char)OperationBinaryString(&str);
    return 0;
}