class Solution
{
public:
    bool isPowerOfFour(int num)
    {
        return floor(log(num) / log(4)) == ceil(log(num) / log(4)) && num != 0;
    }
};