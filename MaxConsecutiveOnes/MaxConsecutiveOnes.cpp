// MaxConsecutiveOnes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int GetMaxCOnsecutiveOnes(std::vector<int>& A)
{
    int maxCount = 0;
    int count = 0;
    for (auto a : A)
    {
        if (a == 1)
            ++count;
        else
        {
            maxCount = std::max(maxCount, count);
            count = 0;
        }
    }

    return std::max(maxCount, count);
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count == 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The number array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::cout << "The maximum consecutive count is " << GetMaxCOnsecutiveOnes(vec) << std::endl;
    }
}
