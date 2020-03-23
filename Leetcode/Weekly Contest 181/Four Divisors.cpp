/**
 *  @judge Leetcode
 *  @id 1390
 *  @name Four Divisors
 *  @contest Weekly Contest 181
 * 
 *  @tag math, implementation, prime
 */
class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                continue;
            }
            int temp = 1 + nums[i], divisor = 2;
            for (int j = 2; j * j <= nums[i]; j++)
            {
                if (j * j == nums[i])
                {
                    temp += j;
                    divisor += 1;
                }
                else if (nums[i] % j == 0)
                {
                    divisor += 2;
                    temp += (j + (nums[i] / j));
                }
                if (divisor > 4)
                {
                    break;
                }
            }
            if (divisor == 4)
            {
                ans += temp;
            }
        }
        return ans;
    }
};