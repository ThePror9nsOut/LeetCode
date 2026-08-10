class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int bestGuess = 500*1000;

        sort(nums.begin(), nums.end());

        for (int a = 0; a < nums.size()-1; a++) {
            int left = a+1;
            int right = nums.size()-1;

            while (left < right) {
                int sum = nums[a] + nums[left] + nums[right];

                int diffSum = target - sum;
                int diffBGuess = target - bestGuess;

                if (abs(diffSum) <= abs(diffBGuess)) {
                    bestGuess = sum;
                }
                
                if (left < right && sum - target < 0) {
                    left++;
                }
                else if (left < right && sum - target > 0) {
                    right--;
                }
                else {
                    bestGuess = sum;
                    left++;
                    right--;
                }

            }
        }

        return bestGuess;
    }
};