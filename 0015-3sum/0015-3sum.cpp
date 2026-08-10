#include <stdlib.h>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

    for (int a = 0; a < nums.size(); ++a) {
        if (a > 0 && nums[a] == nums[a - 1])
            continue;

        int left = a + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[a] + nums[left] + nums[right];

            if (sum < 0)
                ++left;
            else if (sum > 0)
                --right;
            else {
                result.push_back({nums[a], nums[left], nums[right]});

                ++left;
                --right;

                while (left < right && nums[left] == nums[left - 1])
                    ++left;

                while (left < right && nums[right] == nums[right + 1])
                    --right;
            }
        }
    }
    
    return result;

    }
};