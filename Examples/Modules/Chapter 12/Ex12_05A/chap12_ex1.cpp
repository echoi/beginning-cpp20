// exercise 12-1. 
// 1. Create a class called Integer that has a single, 
// private member variable of type int. 
// 2. P/ provide a class constructthat outputs a message when an object is created. 
// 3. Define member functions to get and set the member variable and to output its value. 
// 4. Write a test program to create and manipulate at least three Integer objects and 
// verify that you can’t assign a value directly to the member variable.
// 
// 5. Exercise all the class member functions by getting, setting, and 
// outputting the value of the member variable of each object. 
// 6. Make sure to create at least one const Integer object and 
// verify which operations you can and cannot apply on it.

#include<iostream>

class Integer {
public:
    Integer() = default;
    Integer(int value);
    
    int getValue(){
        return privateValue;
    };

    void setValue(const int value){
      privateValue = value;
    };

private:
    int privateValue{1};     
};


// Constructor definition
Integer::Integer(int value) : privateValue{value}
{ 
    std::cout << "Integer constructor called." << std::endl;
}

int main()
{
    Integer obj1 {14};
    Integer obj2 {-6};
    Integer obj3 {3};

    std::cout << "The private value is from object 1 = " << obj1.getValue() << std::endl;
    std::cout << "The private value is from object 2 = " << obj2.getValue() << std::endl;
    std::cout << "The private value is from object 3 = " << obj3.getValue() << std::endl;
    //std::cout << "The private value is " << obj1.privateValue << std::endl;
    obj1.setValue(25);
    std::cout << "\nNew private value for object 1 is " << obj1.getValue() << std::endl;
    
    
}