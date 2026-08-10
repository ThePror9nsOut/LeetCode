class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int best = 0;
        int bias = 0;
        int score = 0;
        unordered_set<char> used;

        if (s.length() <= 1)
        {
            return s.length();
        }

        for (int i = 0; i < s.length(); i++)
        {
            while (used.find(s[i]) != used.end())
            {
                used.erase(s[bias]);
                bias++;
                score--;
            }
            used.insert(s[i]);
            score++;
            best = max(best, score);
        }

        return best;
    }
};
