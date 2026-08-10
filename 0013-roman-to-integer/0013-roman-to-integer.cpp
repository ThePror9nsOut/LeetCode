class Solution
{
private:
    int translate(char ch)
    {
        switch (ch)
        {
            case 'I':
                return 1;
                break;
            case 'V':
                return 5;
                break;
            case 'X':
                return 10;
                break;
            case 'L':
                return 50;
                break;
            case 'C':
                return 100;
                break;
            case 'D':
                return 500;
                break;
            case 'M':
                return 1000;
                break;
            default:
                return 0;
                break;
        }
    }

public:
    int romanToInt(string s)
    {
        int out = 0;
        int translated;

        for (int i = 0; i < s.size(); i++)
        {
            translated = translate(s[i]);
            if (i < s.size() && translate(s[i+1]) > translated)
                out -= translated;
            else
                out += translated;
        }

        return out;
    }
};