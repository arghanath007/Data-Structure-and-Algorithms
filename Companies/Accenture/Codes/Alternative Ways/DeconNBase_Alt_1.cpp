#include <bits/stdc++.h>
using namespace std;
char *DectoNBase(int n, int num)
{
  int len = 0;
  int temp = num;
  // Loop for finding the length of the string
  while (temp != 0)
  {
    temp = temp / n;
    len += 1;
  }
  char *str = (char *)malloc((len + 1) * sizeof(char));
  int i = 0;
  int r; // For taking the remainders
  while (num != 0)
  {
    r = num % n;
    if (r >= 0 && r <= 9)
      str[i] = (char)(r + 48);
    else if (r >= 10 && r <= 35)
      str[i] = (char)(r + 55);
    i += 1;
    num = num / n;
  }
  str[i] = '\0';
  for (int j = 0; j < len / 2; j++)
  {
    swap(str[j], str[len - j - 1]);
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