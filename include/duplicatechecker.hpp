#ifndef DUPLICATECHECKER_HPP
#define DUPLICATECHECKER_HPP

#include <vector>

class DuplicateChecker
{
public:
    // Function to check duplicate within window size k
    bool hasDuplicateInWindow(const std::vector<int>& nums, int windowSize);
};

#endif