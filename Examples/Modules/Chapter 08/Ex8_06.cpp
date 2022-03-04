// Passing a two-dimensional array to a function
// import <iostream>;
// import <array>;	          // For std::size()
#include <iostream>
#include <array>	          // For std::size()

// double yield(const double values[][4], size_t n);
double yield(const double values[][4], size_t n);

int main()
{
  double beans[3][4] {  { 1.0,   2.0,   3.0,   4.0},
                        { 5.0,   6.0,   7.0,   8.0},
                        { 9.0,  10.0,  11.0,  12.0}  };

  std::cout << "Yield = " << yield(beans, std::size(beans))
            << std::endl;
}

// beans[0] = 0x2234234 --> 0x2234234 beans[0][0] = 1.0, 0x2234242 beans[0][1] = 2.0, 0x2234250 beans[0][2], 0x2234258 beans[0][2]
// 3 = std::size(beans) = [ 0x2234234, 0x5fb0092, 0x87abc7 ]
// 
// beans ==> pointer to starting memory address for the 0th row.
// beans+1 ==> pointer to memory address for the 1st row.
// beans+2 ==> pointer to memory address for the 2nd row.
// *(beans) -> address of memory where '1.0'is stored.
// *(beans+1) -> address of memory where '5.0'is stored.
// *(beans+2) -> address of memory where '9.0'is stored.
// *(beans[0]) -> address of memory where '1.0'is stored.
// *(beans[1]) -> address of memory where '5.0'is stored.
// *(beans[2]) -> address of memory where '9.0'is stored.

// Function to compute total yield
//double yield(const double array[][4], size_t size)
double yield(const double array[][4], size_t size)
{
  double sum  {};
  for (size_t i {}; i < size; ++i)   // Loop through rows
  {
    for (size_t j {}; j < std::size(array[i]); ++j) // Loop through elements in a row
    {
      sum += array[i][j];
      //sum += *(*(array+i)+j);
    }
  }
  return sum;
}
