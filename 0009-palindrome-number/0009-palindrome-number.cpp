class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        int xcopy = x;
        u_int reversed = 0;

        while (xcopy >= 1)
        {
            reversed *= 10;
            reversed += xcopy % 10;
            xcopy /= 10;
        }

        return x == reversed;
    }
};