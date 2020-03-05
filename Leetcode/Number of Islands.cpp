class Solution
{
public:
    int numIslands(vector<vector<char>> &grid)
    {
        if (grid.empty() || 0 == grid[0].size())
        {
            return 0;
        }
        int row = grid.size(), col = grid[0].size();

        int islands = 0;
        for (int i = 0; i != row; i++)
        {
            for (int j = 0; j != col; j++)
            {
                if (grid[i][j] == '1')
                {
                    dfs(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
    void dfs(vector<vector<char>> &grid, int i, int j)
    {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == '0')
        {
            return;
        }
        grid[i][j] = '0';
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
};