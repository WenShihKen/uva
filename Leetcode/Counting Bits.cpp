/**
 *  @judge Leetcode
 *  @id 338
 *  @name Counting Bits
 *  @contest
 * 
 *  @tag math, dp
 */
class Solution
{
public:
    vector<int> countBits(int num)
    {
        vector<int> ans;
        ans.resize(num + 1);
        ans[0] = 0;
        for (int i = 1; i <= num; i++)
        {
            if (i & 1)
            {
                ans[i] = ans[i >> 1] + 1;
            }
            else
            {
                ans[i] = ans[i >> 1];
            }
        }
        return ans;
    }
};
//0 1 1 2 1 2 2 3 1 2 2 3 2 3 3 4