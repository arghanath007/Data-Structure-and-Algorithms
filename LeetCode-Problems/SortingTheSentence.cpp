#include<bits/stdc++.h>

using namespace std;

string sortSentence(string s) 
{
   vector<string> position(10,""); // Storing the position numbers of the strings which are shuffled.
   for(int i=0;i< s.size();i++)
   {
       int j=i;
       string temp;
       while(!isdigit(s[j]))  //Checking if it is a character then push_back() into 'temp' string otherwise add the digit to the 'position' vector.
       {
           temp.push_back(s[j]);
           j++;
       }
       position[s[j] - '0']=temp; //Adding the numbers to the 'position' vectors for printing them in sorted order or in order as determined by the numbers.
       i=j+1;
   }
   string answer;
   for(int i=0;i<10;i++)
   {
       if(position[i].length() >0)
       {
           answer+=position[i];
           answer.push_back(' ');
       }
   }
   answer.pop_back(); //Popping the last space(' ') which was inputted into the 'answer' string but the question asked that the answer doesn't have one so we popped the space.
   return answer;
}

int main()
{
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin, sentence);
    cout<<"The sorted sentence is: \n"<<sortSentence(sentence);
}




