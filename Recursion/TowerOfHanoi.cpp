#include<bits/stdc++.h>

using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    if(n==0)
    {
        return;
    }
    towerOfHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}

int main()
{
    int number;
    cout<<"Enter the number of blocks to be moved: ";
    cin>>number;
    towerOfHanoi(number,'A','C','B');
}