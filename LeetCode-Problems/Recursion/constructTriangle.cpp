#include<bits/stdc++.h>

using namespace std;


vector<int> constructRectangle(int area) 
{
    int square= sqrt(area);
    while(area % square)
    {
        square--;
    }
    return {area/square, square};
}
int main()
{
    int area;
    vector<int> rectangle;
    cout<<"Enter the area: ";
    cin>>area;
    rectangle= constructRectangle(area);
    for(int i=0;i< rectangle.size();i++)
    {
        cout<<rectangle[i]<<" ";
    }

}