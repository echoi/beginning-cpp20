// Box.cppm - defines Box class
//export module box;

#include <iostream>     // For standard streams
//#include <format>       // For string formatting

//export 
class Box
{
public:
  // Constructors
  Box(double l, double w, double h) : m_length{l}, m_width{w}, m_height{h}
  { std::cout << "Box(double, double, double) called.\n"; }

  explicit Box(double side) : Box{side, side, side} 
  { std::cout << "Box(double) called.\n"; }

  Box() { std::cout << "Box() called.\n"; }   // Default constructor

  double volume() const { return m_length * m_width * m_height; }

  // Accessors
  double getLength() const { return m_length; }
  double getWidth()  const { return m_width; }
  double getHeight() const { return m_height; }

protected:                   // Protected to facilitate further examples
  double m_length {1.0};     // later this chapter (should normally be private)
  double m_width {1.0};
  double m_height {1.0};
};

// Stream output for Box objects
//export 
std::ostream& operator<<(std::ostream& stream, const Box& box)
{
  return stream << box.getLength() << ", " << box.getWidth() << ", " << box.getHeight();
  // return stream << std::format("Box({:.1f}, {:.1f}, {:.1f})",
  //             box.getLength(), box.getWidth(), box.getHeight());
}

