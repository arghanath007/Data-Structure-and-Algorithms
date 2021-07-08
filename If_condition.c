#include<stdio.h>
#include<conio.h>

int main()
{
    //Syntax
    // if(someCondtion)
    // {
    //     //Some code
    // }
    // else
    // {
    //     //Some different code.
    // }

    //Example
    // int number=10;
    // if( number == 5) // 10 == 5 false
    // {
    //     printf("Number is Found!!!");

    // }
    // else
    // {
    //     printf("Number is not found!!!");
    // }

    // Example
    int number=10;
    int flag=0;
    int array[]={1,2,3,4,5,6};
    for(int i=0;i< 6;i++)
    {
        if(number == array[i])
        {
            flag=1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Number Found!!!");
    }
    else
    {
        printf("Number Not found!!");
    }

    return 0;
}