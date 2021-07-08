#include <iostream>
#include <cmath> 
using namespace std;  
 
void getSinCos(double degrees, double &sinOut, double &cosOut)
{
    // sin() and cos() take radians, not degrees, so we need to convert
    static constexpr double pi { 3.14159265358979323846 }; // the value of pi
    double radians= degrees * pi / 180.0 ;
    sinOut = sin(radians);
    cosOut = cos(radians);
}
 
int main()
{
    double sin;
    double cos;
 
    // getSinCos will return the sin and cos in variables sin and cos
    getSinCos(45.0, sin, cos);
 
    std::cout << "The sin is " << sin << '\n';
    std::cout << "The cos is " << cos << '\n';
    return 0;
}

//Example of Pass by Reference and why it is better than Pass By Value. Link to the article https://www.learncpp.com/cpp-tutorial/passing-arguments-by-reference/
//Dont use const for the Pass of references 'sinOut' and 'cosOut' because their value are being changed within the function. 

// ****When passing an argument by reference, always use a const reference unless you need to change the value of the argument.