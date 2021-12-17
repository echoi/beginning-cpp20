#include <iostream>

int main()
{
    int number1 {};
    int number2 {};

    std::cout<<"Insert integer number1:";
    std::cin >> number1;
    std::cout<<"Insert integer number2:";
    std::cin >> number2;
    std::cout<<std::endl;

    if (number1==number2)
    {
        std::cout<<"The two numbers are the same"<<std::endl;
    }

    else
    {
        std::cout<<"The two numbers are NOT the same"<<std::endl;
    }

return 0;

}