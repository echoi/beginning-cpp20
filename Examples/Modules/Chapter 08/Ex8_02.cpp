// Calculating powers - rearranged
// import <iostream>;
// import <format>;
#include <iostream>
#include <iomanip>
// #include <format>

// Declare and define a function that takes two numbers and multiply them and return the product.
double product( int number1, double number2 );
double product( double number1, double number2);
double power(double x, int n);               // Function prototype - uncomment for successful compilation

int main()
{
  // Calculate powers of 8 from -3 to +3
  for (int i{ -3 }; i <= 3; ++i)
    // std::cout << std::format("{:10}", power(8.0, i));
    std::cout << std::setw(10) << power(8.0, i);

  std::cout << std::endl;

  std::cout << product( 4.167, -100 ) << std::endl;
}

// int 4 bytes    = 32 bits   1 --> 1.00000000000000000
// float 4 bytes  = 32 bits   1.000000 --> 1.0000000000000000
// double 8 bytes = 64 bits
// double num = 3.141592129739817927397123; 
// double -> float: 3.14159212973
// double -> int: 3 

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

// Function to calculate product of two float. pt num
double product( int a, double b)
//double product( double a, double b)
{
  std::cout << "(1)" << std::endl;
  double result{};
  result = a * b;
  return result;
}

// Function to calculate product of two float. pt num
double product( double a, double b)
{
  std::cout << "(2)" << std::endl;
  double result{};
  result = a * b;
  return result;
}
