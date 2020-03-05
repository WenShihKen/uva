class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        long check = long(dividend) / divisor;

        if (check >= INT_MAX)
        {
            return INT_MAX;
        }

        return int(dividend / divisor);
    }
};