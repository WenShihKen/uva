class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return (ceil(log2(n)) == floor(log2(n)) && n);
    }
};