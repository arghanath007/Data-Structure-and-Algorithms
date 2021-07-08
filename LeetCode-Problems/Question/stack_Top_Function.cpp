#include<bits/stdc++.h>

using namespace std;

//https://www.cplusplus.com/reference/stack/stack/top/

int main()
{
    stack<char> myStack;
    myStack.push('(');
    myStack.push('[');
    myStack.top()= ('{');
    myStack.push(']');
    myStack.push(')');
    
    std::cout << "mystack.top() is now " << myStack.top() << '\n';
    return 0;
}