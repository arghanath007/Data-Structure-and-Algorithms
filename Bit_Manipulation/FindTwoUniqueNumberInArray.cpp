#include<bits/stdc++.h>

using namespace std;

int setBits(int number, int position)
{
    return (number & (1<<position)) !=0; // If this is equal to '0' then we know there is no setBit in that position. It will return if at array[i] and in 'position-1' we have a setBit or not.
}

void UniqueNumber(int array[],int size)
{
    int xorSum=0;
    for(int i=0;i< size;i++)
    {
        xorSum^=array[i];
    }
    int tempXor=xorSum; //We are storing the xorSum we got here because we need it at the end.
    int setBit=0;
    int position=0;
    while(setBit!=1)
    {
        setBit= xorSum & 1; // Whatever will be the last bit of xorSum we will get it by using the bitwise and(&) operator on xorSum with '1'.
        position++;        //Example: let xorSum -> 0010 then we and it with '1'. (0010 & 1) Like this then the result will be 0000 or  zero(0).But we require one(1) here. 'postion' variable is used to tell us the position where we are finding the bit as '1'. If we dont find it in the current position then we plusplus(++) or increment the position. We have checked in this current position that the bit is '0', to got to the right side of the current position then we do right shift of xorSum with '1'.
        xorSum>>=1;
    }
    //The while loop will be running till we find the value of '1' in the 'setBit' variable. If we find '1' in the setBit variable then from the 'position' variable we will be able to find out the index where the setBit is located or found. 
    int newXor=0;
    for(int i=0;i<size;i++)
    {
        if(setBits(array[i], position-1)) // 'position -1' because when we are finding the position that time the while loop will run one time extra or once more so the value of 'position' variable will be incremented one extra time than required that's why we are doing 'position-1'. Then we are checking in every index of the array that if the setBit is present in that 'position-1'. If the condition is true or there is a setBit in that position then we have to 'Xor' them.
        {
            newXor^=array[i];
        }
    }// When this loop finishes then all of the elements that are present in the array have a setBit or value of '1' in that position(i.e 'position-1') then we will find the 'Xor' of all those elements. The 'newXor' variable will be containing a unique variable from the array. It will be one of the two unique numbers in the array.  

    cout<<newXor<<endl; //1st unique Number;
    cout<<(tempXor ^ newXor)<<endl; // 2nd unique Number
}
 
int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
     int* array=new int[size]; // array declaraing with 'new' keyword.
    cout<<"Enter the array: ";
    for(int i=0;i< size;i++)
    {
        cin>>array[i];
    }
    cout<<"The Unique Numbers are:\n ";
    UniqueNumber(array,size);
    return 0;
}
 

//First what we did was take out the Xor of all the elements in the array. In the Xor we got, we found out the position of the right most setBit in the Xor. With that position we would loop over the array elements and find all of the elements that have their setBit matching with the position we found from the Xor and with those elements we found we did a Xor of those elements with matching setBit positions. This resulting Xor will give us one of the two unique numbers. We will store the Xor of the whole array elements in a varibale and then we will Xor it with the unique number we got before and the result of this Xor is that we found the 2nd unique number of the array.