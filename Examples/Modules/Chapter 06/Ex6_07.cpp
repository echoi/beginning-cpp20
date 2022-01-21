// Using smart pointers
#include <iostream>
//import <format>;
#include <memory>   // For smart pointers
#include <vector>   // For std::vector<> container

#include <cctype>  // For std::toupper()

#include <iomanip>  // for setprecision


int main()
{
  
  std::vector<std::shared_ptr<std::vector<double>>> records; // Temperature records by days
  // records[0] => shared_ptr to [0.0, 0.1, 11.0, 13.0]    // very cold day
  // records[1] => shared_ptr to [10.0, 11.1, 13.0, 15.0, 17.0, 19.0]  // warm day
  // records[2] => shared_ptr to [1.0, 2.1] // cold again

  size_t day{ 1 };       // Day number

  while (true)           // Collect temperatures by day
  {
    // Vector to store current day's temperatures created in the free store
    auto day_records{ std::make_shared<std::vector<double>>() };
    records.push_back(day_records);   // Save pointer in records vector

    std::cout << "Enter the temperatures for day " << day++
              << " separated by spaces. Enter 1000 to end:\n";

    while (true)
    { // Get temperatures for current day
      double t{};        // A temperature
      std::cin >> t;
      if (t == 1000.0) break;

      day_records->push_back(t);
    }

    std::cout << "Enter another day's temperatures (Y or N)? "; 
    char answer{};
    std::cin >> answer;
    if (std::toupper(answer) != 'Y') break;
  }

  day = 1;

  for (auto record : records)
  {
    double total{};
    size_t count{};

    //std::cout << std::format("\nTemperatures for day {}:\n", day++);
    std::cout << "\nTemperatures for day " << day++ << ":\n";
    for (auto temp : *record)
    {
      total += temp;
      //std::cout << std::format("{:6.2f}", temp);
      std::cout << std::setprecision(2) << std::setw(5) << temp;
      if (++count % 5 == 0) std::cout << std::endl;
    }

    //std::cout << std::format("\nAverage temperature: {:.2f}", total / count) << std::endl;
    std::cout << "\nAverage temperature: " << std::setprecision(2) << total/count << std::endl;
  }
}
