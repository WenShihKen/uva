/**
 *  @judge Leetcode
 *  @id 70
 *  @name Climbing Stairs
 * 
 *  @tag dp
 */
class Solution
{
public:
    int climbStairs(int n)
    {
        if (n <= 2)
        {
            return n;
        }
        else
        {
            int a = 1, b = 2;
            int ans = 0;
            for (int i = 3; i <= n; i++)
            {
                ans = a + b;
                int temp = ans;
                a = b;
                b = temp;
            }
            return ans;
        }
    }
};