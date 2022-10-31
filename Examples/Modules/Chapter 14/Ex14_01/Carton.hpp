// Carton.cppm - defines the Carton class with the Box class as base
//export module carton;

#include <string>
#include <string_view>
//#include "Box.hpp"


class Carton : public Box
{
public:
  explicit Carton(std::string_view material = "Cardboard")  // Constructor
    : m_material{material} {}

private:
  std::string m_material;
};

