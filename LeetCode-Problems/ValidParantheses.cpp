#include<bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    stack<char> myStack;
    for (char c : s)
    {
        if (myStack.empty() || c == '(' || c == '{' || c == '[')
        {
            myStack.push(c);
        }
        else
        {
            if ((c == ')' && myStack.top() != '(') || 
                (c == ']' && myStack.top() != '[') ||
                (c == '}' && myStack.top() != '{'))
            {
                return false;
            }
            myStack.pop();
        }
    }
    return (myStack.empty());



    // stack<char> stk;
    // for(const auto& c : s)
    // {
    //     switch(c)
    //     {
    //         case '{':  stk.push('}'); break;
    //         case '[':  stk.push(']'); break;
    //         case '(':  stk.push(')'); break;
    //         case '}':
    //         case ']':
    //         case ')':
    //             if(stk.size() == 0 || c != stk.top()) // stk.top() accesses the top element in the stack i.e the last element in the stack.
    //             {
    //                 return false;
    //             } 
    //             else
    //             {
    //                 stk.pop();
    //             }
    //         default: ;  // do nothing for invalid inputs
    //     }
    // }
    // return (stk.size() == 0);
}

int main()
{
    string paranthesis;
    cout<<"Enter the paranthesis: ";
    getline(cin, paranthesis);
    bool result=isValid(paranthesis);
    if(result)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}