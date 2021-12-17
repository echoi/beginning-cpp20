//Ex4_02
//Goal1: Allow users to enter two integers
//Goal2: No - or zero numbers 
//Goal3: Number should be multiple of the other 

#include <iostream>

int main ()
{
  int number1 {};
  int number2 {};
  
  std::cout <<"Enter the first integer: ";
  std::cin >> number1; 
  std::cout <<"Enter the second integer: ";
  std::cin >> number2;

  if (number1 <= 0 || number2 <=0 ) //another way to shorter the code
  {
    std::cout << "Only positive numbers accepted" ;
    return -1;
  }
//   else if (number2 <= 0 )
//   {
//     std::cout << "Only positive numbers accepted" ;
//     return -1;
//   }
  
  if( number1 >= number2) {
    if( number1 % number2 == 0 )
        std::cout << number1 << " is an exact multiple of " << number2 << std::endl;
    else 
        std::cout << number1 << " is NOT an exact multiple of " << number2 << std::endl;
  }
  else {
    if( number2 % number1 == 0 )
        std::cout << number2 << " is an exact multiple of " << number1 << std::endl;
    else 
        std::cout << number2 << " is NOT an exact multiple of " << number1 << std::endl;
  }


}