#include "DuplicateChecker.hpp"
#include <unordered_set>

bool DuplicateChecker::hasDuplicateInWindow(const std::vector<int>& nums, int windowSize)
{
    std::unordered_set<int> window;

    int left = 0;

    for (int right = 0; right < nums.size(); right++)
    {
        // If element already exists in window -> duplicate
        if (window.find(nums[right]) != window.end())
        {
            return true;
        }

        window.insert(nums[right]);

        // Maintain sliding window size
        if (right - left >= windowSize)
        {
            window.erase(nums[left]);
            left++;
        }
    }

    return false;
}