#include<bits/stdc++.h>

using namespace std;

int numDifferentIntegers(string word)
{
    set<string> numbers;
    for(int i=0;i<word.length();i++)
    {
        if(isdigit(word[i]))
        {
            string number;
            while(word[i] == '0')
            {
                i++;
            }
            while (isdigit(word[i])) // checking if the next character is a number or not. If it is a number then we are Concatenating it to the 'number' string otherwise we are inserting it to the 'numbers' set.
            {
                number+=word[i++];
            }
            numbers.insert(number); 
        }
    }
    return numbers.size();
}

int main()
{
    string word;
    cout<<"Enter a word: ";
    getline(cin,word);
    cout<<numDifferentIntegers(word);
}