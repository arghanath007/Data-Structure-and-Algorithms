#include<bits/stdc++.h>

using namespace std;


int ComputeArea(int A, int B, int C, int D, int E, int F, int G, int H)     
{
    int rectangleOneArea = (min(G, C) > max(E, A)) ? (min(G, C) - max(E, A)) : 0;
    int rectangleTwoArea = (min(D, H) > max(B, F)) ? (min(D, H) - max(B, F)) : 0;
    return (((D - B) * (C - A) + (G - E) * (H - F)) - (rectangleOneArea * rectangleTwoArea));
}

// int overlapArea(int A,int C, int E, int G)
// {
//     if(C < E || A > G)
//     {
//         return 0;
//     }
//     return (min(C,G) - max(A,E));
// }

// int ComputeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
// {
//     int firstRectangle= (A-C)*(B-D);
//     int secondRectangle=(E-G)* (F-H);

//     int commonArea= overlapArea(A,C,E,G) * overlapArea(B,D,F,H);
//     return firstRectangle + secondRectangle - commonArea;
// }

int main()
{
    int A,B, C, D, E, F, G, H;
    cout<<"Enter the four coordinates of the 1st rectangle: ";
    cin>>A>>B>>C>>D;
    cout<<"Enter the four coordinates of the 2nd rectangle: ";
    cin>>E>>F>>G>>H;
    cout<<"The area is: "<<ComputeArea(A,B,C,D,E,F,G,H)<<endl;
}