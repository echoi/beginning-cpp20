//module integer;
#include <iostream>
#include "integer.hpp"

Integer::Integer(int value) : m_value{value}
{
  std::cout << "Object created." << std::endl;
}

void Integer::show() const
{
  std::cout << "Value is " << m_value << std::endl;
}
