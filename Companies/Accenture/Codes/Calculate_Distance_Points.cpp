#include<bits/stdc++.h>

using namespace std;

float CalculateDistancePoints(int x1,int y1, int x2,int y2, int x3, int y3)
{
    float dist1 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    float dist2 = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    float dist3 = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    float dist = dist1+dist2+dist3;
    return dist;
}


int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the first point coordinates: ";
    cin>>x1>>y1;
    cout<<"Enter the second point coordinates: ";
    cin>>x2>>y2;
    cout<<"Enter the third point coordinates: ";
    cin>>x3>>y3;
    cout<<"The Distance is: "<<CalculateDistancePoints(x1,y1,x2,y2,x3,y3);
    return 0;
}