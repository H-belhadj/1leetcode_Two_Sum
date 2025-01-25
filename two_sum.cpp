#include <iostream>
#include <iterator>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int size = distance(begin(nums), end(nums));
        int n = size;
        for(int i = 0; i < n; i++)
            for(int j = i + 1 ; j < n; j++)
                if(nums[i] + nums[j] == target)
                    return {i, j};
        return {};
    }
};
