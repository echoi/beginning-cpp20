// Defining and using a derived class
#include <iostream>
#include "Box.hpp"                 // For the Box class base class and parents class
#include "Carton.hpp"              // For the Carton class // drived class and child class

int main()
{
  // Create a Box object and two Carton objects
  Box box {40.0, 30.0, 20.0};
  Carton carton;
  Carton chocolateCarton {"Solid bleached board"};  // Good old SBB
  // Check them out - sizes first of all
  std::cout << "box occupies " << sizeof box << " bytes" << std::endl;
  std::cout << "carton occupies " << sizeof carton << " bytes" << std::endl;
  std::cout << "candyCarton occupies " << sizeof chocolateCarton << " bytes" << std::endl;

  // Now volumes...
  std::cout << "box volume is " << box.volume() << std::endl;
  std::cout << "carton volume is " << carton.volume() << std::endl;
  std::cout << "chocolateCarton volume is " << chocolateCarton.volume() << std::endl;

  std::cout << "chocolateCarton length is " << chocolateCarton.getLength() << std::endl;

  // Uncomment any of the following for an error...
  // box.m_length = 10.0;
  // chocolateCarton.m_length = 10.0;
}
