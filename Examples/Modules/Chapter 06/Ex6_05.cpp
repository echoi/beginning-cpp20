// Calculating primes using pointer notation
#include <iostream>
#include <iomanip>
//import <format>;

int main()
{
  const size_t max {100};    // Number of primes required
  long primes[max] {2L};     // First prime defined
// [ 2 | 2 | 3|  4| 5 | 0 | ... | 0 | 0 ]
  // array with a fixed size: to be created in the "stack"
  size_t count {1};          // Count of primes found so far
  long trial {3L};           // Candidate prime

  while (count < max)
  {
    bool isprime {true}; // Indicates when a prime is found

    // Try dividing the candidate by all the primes we have
    for (size_t i {}; i < count && isprime; ++i)
    { // primes = [ 2 | 3 |  0 |  ... | | ]
      // *(primes   (0x123AC87)) --> 0-th element
      // *(primes+1 (0x123AC9F)) --> 1-th element 
      // *(primes+2 (0x123ACA8)) --> 2-th element
      isprime = trial % *(primes + i) > 0;   // False for exact division
      // tiral = 5, count = 2
      // i=0; i < 1 && isprime = true;
      //      5 % *(primes + 0)= *(primes) = 2 = 1 > 0
      // i=1; i < 2 && isprime = true
      //      5 % *(primes + 1)= 3 = 2 > 0
      // i=2; i == 2 

    }

    if (isprime)
    {                              // We got one...
      // count =2 --> 3
      *(primes + count++) = trial; // ...so save it in primes array
      // *(primes + 1)  = 3
      // [ 2 | 3 | 5 | 0 | ... |0 | 0 ]
    }

    trial += 2;                    // Next value for checking
  }

  // Output primes 10 to a line
  std::cout << "The first " << max << " primes are:" << std::endl;
  for (size_t i{}; i < max; ++i)
  {
    std::cout << std::setw(7) << *(primes + i);
    // std::cout << std::setw(7) << primes[i];
    if ((i+1) % 10 == 0)           // Newline after every 10th prime
      std::cout << std::endl;
  }
  std::cout << std::endl;
}
