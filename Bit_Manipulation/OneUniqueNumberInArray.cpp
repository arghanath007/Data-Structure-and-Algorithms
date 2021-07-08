#include<bits/stdc++.h>

using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1<<pos)) !=0); //If it is not equal to '0' which means that position has '1'.
}

int setBit(int n, int pos)
{
    return (n | 1<<pos); //What it does is that within 'n' it sets the value of '1' at the position.
}

int unique(int array[], int size)
{
    int result=0;
    for(int i=0;i<64;i++)  //To cover all of the bits.
    {
        int sum=0;
        for(int j=0;j<size;j++) //Traversing array elements
        {
            if(getBit(array[j],i)) // We checking if the ith bit of the element at array[j] is it setBit or not. If it is 'true' then we increment our sum(sum++). For the array elements for whom at the ith position the bit is set for those elements we will do sum++ or increment sum.
            {
                sum++;
            }
        }
        if(sum %3 != 0) //If it is true then at the ith position within the 'result' variable we have to set that bit(ith bit).
        {
            result=setBit(result,i);
        }
    }
    return result;
}

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;
    int* array=new int[size];
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"The Unique element is:\n "<<unique(array, size)<<endl;
    return 0;
}
 

//array -> {1,3,2,3,4,2,1,1,3,2}
//Assuming the size of int is 64bits. We will look at the binary representation of the numbers within the array. Within the binary representation of the number, the position where we find the bit of 1(the value of 1. Binary has two bits 1 and 0. So we are looking for the 1 bit here.) and according to that position we will be filling up the new array(the 64 size array). For example for filling up the 0th position of the array, we wound find in which binary representation of the numbers we have the setBit at the 0th position like '1'(number of the array not bit here). If we look at the 1st position of the array, then we would find 2,3 have their setBits at 1st position in their binary representation. For the 2nd position of the array, we have 3,4 as the numbers. We know that the array has triplets of numbers present except the unique number. So the numbers in the '64' size array will be multiples of 3. If we do modules of '3' of the 64 size array then we would get '0' as they are multiples of 3, the position where we dont get '0' as the remainder of the modulus then we know we have the unique number in that position.