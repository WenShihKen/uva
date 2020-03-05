class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        return floor(log10(n) / log10(3)) == ceil(log10(n) / log10(3)) && n != 0;
    }
};