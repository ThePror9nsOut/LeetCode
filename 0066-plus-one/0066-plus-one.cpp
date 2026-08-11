class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int ptr = digits.size()-1;

        if (digits[ptr] < 9) {
            digits[ptr]++;
            return digits;
        }

        digits[ptr] = 0;
        

        while (ptr > 0) {
            ptr--;
            
            if (digits[ptr] < 9) {
                digits[ptr]++;
                return digits;
            }
            else {
                digits[ptr] = 0;
            }
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};