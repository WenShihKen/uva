/**
 *  @judge Leetcode
 *  @id 64
 *  @name Minimum Path Sum
 *  @contest 
 * 
 *  @tag dp
 */
class Solution
{
public:
    int minPathSum(vector<vector<int>> &grid)
    {
        int x = grid.size();
        int y = grid[0].size();
        for (int i = 1; i < grid[0].size(); i++)
        {
            grid[0][i] += grid[0][i - 1];
        }
        for (int i = 1; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (j == 0)
                {
                    grid[i][j] += grid[i - 1][j];
                }
                else
                {
                    grid[i][j] = min(grid[i][j] + grid[i][j - 1], grid[i][j] + grid[i - 1][j]);
                }
            }
        }
        return grid[x - 1][y - 1];
    }
};