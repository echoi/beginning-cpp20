// Overloading the << operator
//import <format>;
#include <string_view>
#include <vector>
//import box;
#include <iostream>

#include "Box.hpp"

int main()
{
  const std::vector boxes {Box {2.0, 1.5, 3.0}, Box {1.0, 3.0, 5.0},
                           Box {1.0, 2.0, 1.0}, Box {2.0, 3.0, 2.0}};
  const Box theBox {3.0, 1.0, 4.0};

  for (const auto& box : boxes)
    if (theBox > box) 
      std::cout << theBox << " is greater than " << box << std::endl;  // > works

  std::cout << std::endl;

  for (const auto& box : boxes)
    if (theBox != box) 
      std::cout << theBox << " is not equal to " << box << std::endl; // != works

  std::cout << std::endl;  

  for (const auto& box : boxes)
    if (6.0 <= box)                     // Yes, even double <= Box works!!
      std::cout << "6 is less than or equal to " << box << std::endl;
}
