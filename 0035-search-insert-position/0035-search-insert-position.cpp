class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool isEven = nums.size() % 2 == 0;

        unsigned int left = 0;
        unsigned int right = nums.size();
        unsigned int mid = right/2;
        
        while (left < mid && mid < right && nums[mid] != target) {
            if (target < nums[mid]) {
                right = mid;
            }
            else if (target > nums[mid]) {
                left = mid;
            }

            mid = left+(right-left)/2;
        }
        
        if (target > nums[mid]) {
            mid++;
        }

        return mid;
    }
};