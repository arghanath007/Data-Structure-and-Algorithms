#include<bits/stdc++.h>

using namespace std;

bool squareIsWhite(string coordinates) 
{
    //One Liner
    return ((coordinates[0] + coordinates[1]) % 2); 

    // Naive Solution
    // if(coordinates[0]=='a' || coordinates[0]=='c' || coordinates[0]=='e' || coordinates[0]=='g')
    // {
    //     if(coordinates[1]%2!=0)
    //     {
    //         return false;
    //     }
    //     else 
    //     {
    //         return true;
    //     }
    // }
    // else
    // {
    //     if(coordinates[1]%2!=0)
    //     {
    //         return true;
    //     }
    //     else 
    //     {
    //         return false;
    //     }
    // }
}

int main()
{
    string coordinates;
    cout<<"Enter the coordinates of chessboard: ";
    getline(cin, coordinates);
    if(squareIsWhite(coordinates))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}

//If the sum is an even number then it is black square. The return will be 'false' as even number(98) % 2 gives 0 or false. If the sum is not an even number(odd number) then it is a white square as odd number(99) % 2 gives 1 or true, so we are returning 'true' as asked in the question.