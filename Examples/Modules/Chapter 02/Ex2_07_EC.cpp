// Finding maximum and minimum values for data types
// import <iostream>;
// import <limits>;
// import <format>;

#include <limits>
#include <iostream>
 
int main() 
{
    std::cout
        << "type\t│ lowest()\t│ min()\t\t│ max()\n"
        << "bool\t│ "
        << std::numeric_limits<bool>::lowest() << "\t\t│ "
        << std::numeric_limits<bool>::min() << "\t\t│ "
        << std::numeric_limits<bool>::max() << '\n'
        << "uchar\t│ "
        << +std::numeric_limits<unsigned char>::lowest() << "\t\t│ "
        << +std::numeric_limits<unsigned char>::min() << "\t\t│ "
        << +std::numeric_limits<unsigned char>::max() << '\n'
        << "int\t│ "
        << std::numeric_limits<int>::lowest() << "\t│ "
        << std::numeric_limits<int>::min() << "\t│ "
        << std::numeric_limits<int>::max() << '\n'
        << "float\t│ "
        << std::numeric_limits<float>::lowest() << "\t│ "
        << std::numeric_limits<float>::min() << "\t│ "
        << std::numeric_limits<float>::max() << '\n'
        << "double\t│ "
        << std::numeric_limits<double>::lowest() << "\t│ "
        << std::numeric_limits<double>::min() << "\t│ "
        << std::numeric_limits<double>::max() << '\n';
}

// int main()
// {
//   std::cout
//     << std::format("The range for type short is from {} to {}\n",
//       std::numeric_limits<short>::min(), std::numeric_limits<short>::max())
//     << std::format("The range for type unsigned int is from {} to {}\n",
//       std::numeric_limits<unsigned int>::min(),
//       std::numeric_limits<unsigned int>::max())
//     << std::format("The range for type long is from {} to {}\n",
//       std::numeric_limits<long>::min(), std::numeric_limits<long>::max())
//     << std::format("The positive range for type float is from {} to {}\n",
//       std::numeric_limits<float>::min(), std::numeric_limits<float>::max())
//     << std::format("The full range for type float is from {} to {}\n",
//       std::numeric_limits<float>::lowest(), std::numeric_limits<float>::max())
//     << std::format("The positive range for type double is from {} to {}\n",
//       std::numeric_limits<double>::min(),
//       std::numeric_limits<double>::max())
//     << std::format("The positive range for type long double is from {} to {}\n",
//       std::numeric_limits<long double>::min(),
//       std::numeric_limits<long double>::max());
// }
