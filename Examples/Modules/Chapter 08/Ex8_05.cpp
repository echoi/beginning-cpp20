// Passing an array to a function
#include <iostream>
#include <array>         // For std::size()

double average(double array[], size_t count);   // Function prototype

int main()
{
  double values[] {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
  std::cout << "Average = " << average(values, std::size(values)) << std::endl; //runs with g++ -std=c++2a Ex8_05.cpp -o Ex8_05
  //std::cout << "Average = " << average(values, values.size()) << std::endl;
  // std::cout << "Average = " << average(values, sizeof(values)) << std::endl;
  // std::cout << "size of 'values' = " << sizeof(values) << std::endl;
  // int len = sizeof(values)/sizeof(values[0]);


}

// Function to compute an average
double average(double *array, size_t count)
{
  double sum {};                       // Accumulate total in here
  for (size_t i {}; i < count; ++i)
    sum += *array++;                   // Sum array elements
  
  return sum / count;                  // Return average
}
// 0x111 0x112  --- 0x123 0x1234