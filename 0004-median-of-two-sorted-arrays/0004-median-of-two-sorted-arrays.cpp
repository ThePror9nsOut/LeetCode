class Solution
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> nums;
        nums.insert(nums.end(), nums1.begin(), nums1.end());
        nums.insert(nums.end(), nums2.begin(), nums2.end());
        int size = nums.size();

        sort(nums.begin(), nums.end());
        
        if (size % 2 == 0)
        {
            return (double) (nums[size/2] + nums[size/2-1]) / 2;
        }
        else
        {
            return nums[size/2];
        }
    }
};