#include<iostream>
#include<vector>

int main()

{
    int upbound;
    std::cout<<" Enter an arbitrary integer:";
    std::cin>>upbound;

    std::vector<int> values;
    for(size_t i {1}; i <= upbound; ++i)
        values.push_back(i);
    // [1,2,3,4,5,6,7,8,9]
    //  ^[0]
    // values[0]

    for(size_t i {0}; i < values.size(); ++i)
        std::cout << values[i] << " ";
    std::cout << std::endl;

    size_t count {0};
    size_t perline {10};
    for(size_t i {0}; i < values.size(); ++i) {
        if( values[i] % 7 ==0 || values[i] % 13 ==0 ) 
            continue; // whether values[i] is a multiple of 7 or 13
        else {
            if( count < perline ) {
                std::cout << values[i] << " ";
                count++;
            }
            else {
                std::cout << std::endl;
                count = 0;
            }
        }
    }
    return 0;
}