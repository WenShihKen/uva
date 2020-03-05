class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        long ans = 0, temp = x;
        while (temp)
        {
            ans = ans * 10 + temp % 10;
            temp /= 10;
        }
        if (ans == long(x))
            return true;
        else
            return false;
    }
};