class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &M)
    {
        if (M.empty())
            return {};
        vector<vector<int>> ans(M.size(), vector<int>(M[0].size()));
        vector<vector<int>> direction = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        for (int i = 0; i != M.size(); i++)
        {
            for (int j = 0; j != M[i].size(); j++)
            {
                int count = 1;
                float temp = M[i][j];
                for (auto dir : direction)
                {
                    int x = i + dir[0], y = j + dir[1];
                    if (x < 0 || x >= M.size() || y < 0 || y >= M[i].size())
                    {
                        continue;
                    }
                    temp += M[x][y], ++count;
                }
                ans[i][j] = floor(temp / count);
            }
        }
        return ans;
    }
};