// Built based on example 12_16

//module box;
//import <iostream>;

#include <iostream>
#include "integer.hpp"
//Constructor
Integer::Integer(int value) : m_value{value}
{
  std::cout << "Object created." << std::endl;
}

void Integer::show() const
{
  std::cout << "Value is " << m_value << std::endl;
}

//Copy Constructor
Integer::Integer(const Integer& obj) 
  : m_value{ obj.m_value }
{
  std::cout << "Object created by copy constructor." << std::endl;
}

// compare function with reference parameter
int Integer::compare(const Integer& obj) const
{
  if (m_value < obj.m_value)
    return -1;
  else if (m_value == obj.m_value)
    return 0;
  else
    return 1;
}