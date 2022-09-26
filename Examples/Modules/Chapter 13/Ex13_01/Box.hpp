#pragma once

class Box
{
public:
  // Constructors
  Box() = default;
  Box(double l, double w, double h) : m_length{l}, m_width{w}, m_height{h} {
    std::cout << "a new box was created!" << std::endl;
  }

  double volume() const { return m_length * m_width * m_height; }

  // Accessors
  double getLength() const { return m_length; }
  double getWidth()  const { return m_width; }
  double getHeight() const { return m_height; }

  bool operator<(const Box& aBox) const     // Less-than operator
  { return volume() < aBox.volume(); }

private:
  double m_length {1.0};
  double m_width {1.0};
  double m_height {1.0};
};
