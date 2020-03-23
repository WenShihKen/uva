/**
 *  @judge Leetcode
 *  @id 746
 *  @name Min Cost Climbing Stairs
 * 
 *  @tag dp
 */
class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        if (cost.size() == 2)
        {
            return min(cost[0], cost[1]);
        }
        for (int i = 2; i < cost.size(); i++)
        {
            cost[i] = min(cost[i] + cost[i - 2], cost[i] + cost[i - 1]);
        }
        return min(cost[cost.size() - 1], cost[cost.size() - 2]);
    }
};