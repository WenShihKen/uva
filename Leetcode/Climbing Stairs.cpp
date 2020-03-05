class Solution
{
public:
    int climbStairs(int n)
    {

        long all[100];
        all[0] = 0, all[1] = 1, all[2] = 2, all[3] = 3;
        for (int i = 4; i <= 50; i++)
        {
            all[i] = all[i - 1] + all[i - 2];
        }

        return all[n];
    }
};
//1111
//112
//22
//121
//211
