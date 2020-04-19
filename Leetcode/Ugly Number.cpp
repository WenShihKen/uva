/**
 *  @judge Leetcode
 *  @id 263
 *  @name Ugly Number
 *  @contest
 * 
 *  @tag ad-hoc
 */
class Solution
{
public:
    bool isUgly(int num)
    {
        int p[3] = {2, 3, 5};
        for (int i = 0; i < 3; i++)
        {
            while (num % p[i] == 0 && num != 0)
            {
                num /= p[i];
            }
        }
        return num == 1;
    }
};