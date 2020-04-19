/**
 *  @judge LeetCode
 *  @id 1342
 *  @name Number of Steps to Reduce a Number to Zero
 *  @contest 
 * 
 *  @tag ad-hoc
 */
class Solution
{
public:
    int numberOfSteps(int num)
    {
        int ans = 0;
        while (num != 0)
        {
            if (num & 1)
            {
                num--;
            }
            else
            {
                num >>= 1;
            }
            ans++;
        }
        return ans;
    }
};