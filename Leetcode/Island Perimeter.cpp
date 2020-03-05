class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        vector<vector<int>> direction = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        if (grid.empty())
            return 0;
        int ans = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    int count = 4;
                    for (auto dir : direction)
                    {
                        int x = i + dir[0], y = j + dir[1];
                        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[i].size())
                        {
                            continue;
                        }
                        if (grid[x][y] == 1)
                        {
                            count--;
                        }
                    }
                    ans += count;
                }
            }
        }
        return ans;
    }
};