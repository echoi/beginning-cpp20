#include <iostream>
#include <iomanip>

int main()
{
    const size_t n {50};    // size array req'd
    long odds[n] {};        // define first odd number in seq
    size_t count {0};       // count odds found
    auto *parray = &odds;

    for (size_t i {}; i < n; ++i)
    {
        *(odds + i) = 2*i + 1;
        // odds[i] = 2*i + 1;
    }

    // std::cout << odds << std::endl;
    // std::cout << odds[1] << std::endl;

    while (count < n) 
    {
        std::cout << std::setw(4) << *(odds + count++); 
        // std::cout << std::setw(4) << odds[count++];
        //std::cout << std::setw(4) << *parray;
        if( count % 10 == 0 )
            std::cout << std::endl;
    }

    std::cout << " " << std::endl;

    // for (size_t i {}; i < n; ++i)
    // {
    //     std::cout << std::setw(4) << *(odds + (n-1) - i);
    //     if( (i+1) % 10 == 0 )
    //         std::cout << std::endl;
    // }

    while (count > 0) 
    {
        std::cout << std::setw(4) << *(odds + --count);
        // std::cout << std::setw(4) << odds[count++];
        //std::cout << std::setw(4) << *parray;
        if( count % 10 == 0 )
            std::cout << std::endl;
    }
}