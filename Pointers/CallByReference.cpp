#include<iostream>
using namespace std;

//Call By Reference -> By sending the address of the variables. Modifying and using them with the help of pointers.
//Call By Value -> When we are normally sending values, so only the values are going and not the variables.

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void increment(int *a, int *b)
{
    *a= *a+*b;
    *b=*a-*b;
}
void incrementOne(int *a)
{
    // *a=*a+1; Working
    // *a++;    Not Working.
    *a+=1;   //Working
}
int main()
{
    int a=2;
    int b=4;
    // int *aptr= &a, *bptr=&b;
    // cout<<a<<" "<<b<<endl;
    // swap(aptr , bptr);
    cout<<a<<" "<<b<<endl;
    swap(&a , &b);
    cout<<a<<" "<<b<<endl;
    increment(&a, &b);
    cout<<a<<" "<<b<<endl;
    incrementOne(&a);
    cout<<a;
}