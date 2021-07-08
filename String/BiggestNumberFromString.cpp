#include<bits/stdc++.h>

using namespace std;

int main()
{
    string numeric;
    cout<<"Enter a numeric value: ";
    getline(cin, numeric);
    int number= stoi(numeric);
    // sort(numeric.begin(), numeric.end()); // This sorts in ascending order.
    // sort(numeric.begin(), numeric.end(), greater<int>());
    // cout<<numeric<<endl;// This sorts in descending order. As we have to find the descending order so we have to use a 3rd parameter called as 'greater<int>()'.
    sort(numeric.begin(), numeric.end(), greater<char>()); // This also works
    cout<<numeric<<endl;
}


//Example: "53214" -> "54321".