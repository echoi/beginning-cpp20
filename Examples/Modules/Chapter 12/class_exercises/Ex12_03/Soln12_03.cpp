// built based on Example 12_16
#include <iostream>
#include "integer.hpp"
#include <memory>

int main() 
{
  // std::cout << "Create integer with the value 4." << std::endl;
  // Create 5 Integer instances with values from 4 to 8.
  Integer four {4};
  Integer five {5};
  Integer six {6};
  Integer seven {7};
  Integer eight {8};
  
  Integer result {4};
  // ***------our solution -----***
  // Integer five_sq {five.multiply(five)}; //5^2
  // five_sq.show();
  // Integer five_cu {five.multiply(five_sq)};   //5^3
  // five_cu.show();
  // // 4*5^3: four.muliply(five.muliply(five.multiply(five)))
  // Integer fourtimesfivecu {four.multiply(five_cu)}; 
//   // Integer sixtimesfivesq {six.multiply(five_sq)};
  // Integer seventimesfive {seven.multiply(five)};
  
  // std::cout <<"result is "<< fourtimesfivecu.add(sixtimesfivesq.add(seventimesfive.add(eight))) << std::endl;  
  // ***------book solution -----***
  //std::cout<<result.multiply(five).add(six).multiply(five).add(seven).multiply(five).add(eight).getValue();
  result.multiply(five).add(six).multiply(five).add(seven).multiply(five).add(eight).show();
}
