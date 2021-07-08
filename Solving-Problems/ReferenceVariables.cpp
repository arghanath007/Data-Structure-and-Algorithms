#include <iostream>

 
int main()
{
    int value{ 5 }; // normal integer
    int& ref{ value }; // reference to variable value
 
    value = 6; 
    ref = 7; // value is now 7
 
    std::cout << value << '\n'; 
    ++ref;
    std::cout << value << '\n'; 
    ++ref;
    std::cout << ref << '\n'; 
    ++value;
    std::cout << value << '\n'; 
 
    return 0;
}