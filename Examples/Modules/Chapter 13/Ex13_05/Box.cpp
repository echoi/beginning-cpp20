#include "Box.hpp"

//import <format>;
#include  <algorithm>   // For the min() and max() function templates

double Box::volume() const
{
    return m_length * m_width * m_height;
}

Box Box::operator+(const Box& aBox) const
{
  // New object has larger length and width, and sum of heights
  // return Box{ std::max(m_length, aBox.m_length),
  //             std::max(m_width, aBox.m_width),
  //             m_height + aBox.m_height };
  return Box{ m_length + aBox.m_length,
              m_width + aBox.m_width,
              m_height + aBox.m_height };
}
Box Box::operator-(const Box& aBox) const 
{
  double length_diff {0.0};
  double width_diff {0.0};
  double height_diff {0.0};
  if( m_length > aBox.m_length ) length_diff = m_length - aBox.m_length;
  if( m_length <= aBox.m_length ) length_diff = aBox.m_length - m_length;

  if( m_width > aBox.m_width ) width_diff = m_width - aBox.m_width;
  if( m_width <= aBox.m_width ) width_diff = aBox.m_width - m_width;

  if( m_height > aBox.m_height ) height_diff = m_height - aBox.m_height;
  if( m_height <= aBox.m_height ) height_diff = aBox.m_height - m_height;

  return Box{ length_diff, width_diff, height_diff };
}

std::partial_ordering Box::operator<=>(const Box& aBox) const
{
  return volume() <=> aBox.volume();
}

std::partial_ordering Box::operator<=>(double value) const
{
  return volume() <=> value;
}

std::ostream& operator<<(std::ostream& stream, const Box& box)
{
  stream << "Box " << " " << box.getLength() << " " << box.getWidth() <<  " " << box.getHeight();
  // stream << std::format("Box({:.1f}, {:.1f}, {:.1f})",
  //                         box.getLength(), box.getWidth(), box.getHeight());                          
  return stream;
}