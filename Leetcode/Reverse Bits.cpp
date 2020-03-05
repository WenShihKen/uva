class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        string bit = "00000000000000000000000000000000";

        int start = 31;
        uint32_t ans = 0;

        while (n > 0)
        {
            if (n % 2 == 1)
            {
                bit[start] = '1';
            }
            else
            {
                bit[start] = '0';
            }
            start--;
            n /= 2;
        }
        for (int i = 0; i <= 31; i++)
        {
            if (bit[i] == '1')
            {
                ans += pow(2, i);
            }
        }
        return ans;
    }
};