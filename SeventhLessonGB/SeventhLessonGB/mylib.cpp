#include "mylib.h"

#include <array>
#include <array>
#include <array>
#include <array>
#include <iostream>


void array_init(std::array<float, 15> & cur_array)
{
    for (auto &element : cur_array)
    {
        element = {1.1f};
    }
}

void array_print(std::array<float, 15>& cur_array)
{
    for (const auto element : cur_array)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

void array_check(std::array<float, 15> & cur_array)
{
    int check_plus {};
    int check_minus {};
    int check_zero {};
    for (const auto element : cur_array)
    {
        if (element > 0)
        {
            check_plus ++;
        }
        else if (element < 0)
        {
            check_minus ++;
        }
            else
                check_zero ++;
    }
    std::cout << "More, than zero: " << check_plus << "\n";
    std::cout << "Less, than zero: " << check_minus << "\n";
    std::cout << "Zero: " << check_zero << "\n";
}



