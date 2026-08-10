class Solution
{
    std::map<int, string> dict =
    {
    { 1,    "I" },
    { 4,   "IV" },
    { 5,    "V" },
    { 9,   "IX" },
    { 10,   "X" },
    { 40,  "XL" },
    { 50,   "L" },
    { 90,  "XC" },
    { 100,  "C" },
    { 400, "CD" },
    { 500,  "D" },
    { 900, "CM" },
    { 1000, "M" }
    };

    map<int, string>::reverse_iterator it;

public:
    string out = "";

    string intToRoman(int num)
    {
        int digit;
        for (int i = sizeof(num)-1; i > -1; i--)
        {
            digit = num / pow(10,i);
            digit %= 10;
            digit *= pow(10,i);

            for (it = dict.rbegin(); it != dict.rend(); it++)
            {
                while (digit / it->first >= 1)
                {
                    digit -= it->first;
                    out.append(it->second);
                }
            }
        }

        return out;
    }
};