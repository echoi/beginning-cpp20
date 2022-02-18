// Calculating powers
#include <iostream>
#include <iomanip>
//import <format>;

// function definition.
// Function to calculate x to the power n
double power(double x, int n)
{
  double result{ 1.0 };
  if (n >= 0)
  {
    for (int i{ 1 }; i <= n; ++i)
      result *= x;
  }
  else // n < 0
  {
    for (int i{ 1 }; i <= -n; ++i)
      result /= x;
  }
  return result;
}

int main()
{
  // Calculate powers of 8 from -3 to +3
  for (int i{ -3 }; i <= 3; ++i)
    // std::cout << std::format("{:10g}", power(8.0, i));
    std::cout << std::setw(10) << power(8.0, i);
    // f: floating point number  xx.yyyy 123.123456
    // g: exponential form or floating: 1.234e+10, 0.12234
    // e: exponential 
  std::cout << std::endl;
}

