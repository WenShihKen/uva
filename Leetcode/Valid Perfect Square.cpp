class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num == 0)
            return false;
        int start = 1;
        while (num > 0)
        {
            num -= start;
            start += 2;
        }
        return num == 0;
    }
};