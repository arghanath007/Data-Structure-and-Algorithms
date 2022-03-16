#include<bits/stdc++.h>

using namespace std;

string DectoNBase(int n, int num) // n-> divisor, num -> divident
{
    string notation="";
    int number = num;
    while(number!=0)
    {
        int rem = number%n;
        if(rem <=9)
        {
            notation+=rem;
        }
        else
        {
            switch(rem)
            {
                case 10: notation = notation + 'A'; break;
                case 11: notation = notation + 'B'; break;
                case 12: notation = notation + 'C'; break;
                case 13: notation = notation + 'D'; break;
                case 14: notation = notation + 'E'; break;
                case 15: notation = notation + 'F'; break;
                case 16: notation = notation + 'G'; break;
                case 17: notation = notation + 'H'; break;
                case 18: notation = notation + 'I'; break;
                case 19: notation = notation + 'J'; break;
                case 20: notation = notation + 'K'; break;
                case 21: notation = notation + 'L'; break;
                case 22: notation = notation + 'M'; break;
                case 23: notation = notation + 'N'; break;
                case 24: notation = notation + 'O'; break;
                case 25: notation = notation + 'P'; break;
                case 26: notation = notation + 'Q'; break;
                case 27: notation = notation + 'R'; break;
                case 28: notation = notation + 'S'; break;
                case 29: notation = notation + 'T'; break;
                case 30: notation = notation + 'U'; break;
                case 31: notation = notation + 'V'; break;
                case 32: notation = notation + 'W'; break;
                case 33: notation = notation + 'X'; break;
                case 34: notation = notation + 'Y'; break;
                case 35: notation = notation + 'Z'; break;
                
            }
        }
        number/=n;
    }
    cout <<"\nPrint"<<notation<<endl;
    return notation;
}

int main()
{
    int n, num;
    cout << "Enter two numbers";
    cin >> n >> num;
    cout <<"The result is: "<< DectoNBase(n, num);
}