#pragma once
// built based on box.hpp from Example 12_16

//export 
class Integer
{
public:
  Integer(int value);
  int getValue() const { return m_value; }
  void setValue(int value) { m_value = value; }
  void show() const;

private:
  int m_value;
};

