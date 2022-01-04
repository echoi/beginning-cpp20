#include <iostream>
#include <array>
// boolean: true and false;

int main()
{
    int number {0};
    int sum {0};
    double ave {0.0};
    int count {0};
    int done {1};

    //count = 0;
    while(true)
    {
        std::cout << "Enter an integer:";
        std::cin >> number;
        sum += number;
        ++count;
        std::cout << "Do you want to continue?(yes=1 , no=0)";
        std::cin >> done;
        if(done==0) break;
    }

    std::cout << "Sum is:" << sum << std::endl;
    ave = sum/count; // 2.0/5.0 = 0.4 --> 4.0000e-1
    // ave=std::static_cast<double>(sum)/count;
    std::cout << "Ave is:" << ave << std::endl;
    
    return 0;
}