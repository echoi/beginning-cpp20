// Modifying the value of a caller variable
//import <iostream>;
#include <iostream>

// double changeIt(double* pointer_to_it);    // Function prototype
// auto changeIt(double* pointer_to_it);
// double changeIt(auto *pointer_to_it);
auto changeIt(auto* pointer_to_it);

int main()
{
  double it {5.0};
  double result {changeIt(&it)};      // Now we pass the address
  
  std::cout << "After function execution, it = " << it
            << "\nResult returned is " << result << std::endl;
}

// Function to modify an argument and return it
/*
double changeIt(double* pit)
{
  *pit += 10.0;             // This modifies the original double
  std::cout << "Within function, *pit = " << *pit << std::endl;
  return *pit;
}
*/
/*
double changeIt(auto* pit)
{
  *pit += 10.0;             // This modifies the original double
  std::cout << "Within function, *pit = " << *pit << std::endl;
  return *pit;
}*/

// Failed experiment
/*
auto changeIt(double* pit)
{
  *pit += 10.0;             // This modifies the original double
  std::cout << "Within function, *pit = " << *pit << std::endl;
  return *pit;
}
*/

/*
auto changeIt(auto* pit)
{
  *pit += 10.0;             // This modifies the original double
  std::cout << "Within function, *pit = " << *pit << std::endl;
  return *pit;
}
*/