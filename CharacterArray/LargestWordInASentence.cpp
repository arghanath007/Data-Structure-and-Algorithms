#include<bits/stdc++.h>
using namespace std;

void LargestWord(char array[], int limit)
{
    int i=0,maxLength=0, currentLength=0;
    int st=0, maxSt=0;
    while(i<limit)
    {
        if(array[i] == ' ' || array[i] == '\0')
        {
            if(currentLength > maxLength)
            {
                maxSt=st;
                maxLength= currentLength;               
            }
            st= i+1;
            currentLength=0;            
        }
        else
        {
             currentLength++;
        }
        if(array[i] == '\0')
        {
            break;
        }
        i++;
    }


    cout<<"Max Length: "<<maxLength<<endl;
    for(int i=0;i< maxLength;i++)
    {
        cout<<array[i + maxSt];
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the sentence: ";
    cin>>n;
    cin.ignore();
    char sentence[100];
    cout<<"Enter the sentence: ";
    cin.getline(sentence,n); // It inputs the whole sentence while when we are using the normal cin then the compiler things that whenever we give a space(" ") it means the things after the space will be stored in the next variable. 
    //In .getline() even if we give (" ") then also it will be stored in the same variable or same sentence. First parameter is where we want to store the input and 2nd parameter is the size of the input.


    cin.ignore(); // This is used to clear the buffer for future use. For this we can use the fflush(stdin) function as well;
    LargestWord(sentence, n);
}