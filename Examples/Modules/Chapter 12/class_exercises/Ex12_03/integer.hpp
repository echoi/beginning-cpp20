#pragma once
// built based on box.hpp from Example 12_16

//export 
class Integer
{
public:
  Integer() = default;
  Integer(int value);
  Integer(const Integer& obj);  // Copy constructor
  int getValue() const { return m_value; }
  void setValue(int value) { m_value = value; }
  void show() const;
  
  // compare function
  int compare(const Integer& obj) const;

  // add function
  Integer& add(const Integer& obj);

  // subtract function
  Integer& subtract(const Integer& obj);

  // multiply functions
  Integer& multiply(const Integer& obj);

private:
  int m_value{0};
};

