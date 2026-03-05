#include <iostream>
#include <vector>
#include "DuplicateChecker.hpp"

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 2, 5};
    int windowSize = 3;

    DuplicateChecker checker;

    if (checker.hasDuplicateInWindow(numbers, windowSize))
    {
        std::cout << "Duplicate found within window size " << windowSize << std::endl;
    }
    else
    {
        std::cout << "No duplicate found in window" << std::endl;
    }

    return 0;
}