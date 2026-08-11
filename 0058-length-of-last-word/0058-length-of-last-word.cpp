class Solution {
public:
    int lengthOfLastWord(string s) {
        int ptr = s.length()-1;
        int length = 0;

        while (s[ptr] == ' ') {
            ptr--;
        }

        while (ptr > -1 && s[ptr] != ' ') {
            length++;
            ptr--;
        }

        return length;
    }
};