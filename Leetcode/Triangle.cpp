/**
 *  @judge Leetcode
 *  @id 120
 *  @name Triangle
 *  @contest 
 * 
 *  @tag dp
 */
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        if (triangle.size() == 1)
        {
            return triangle[0][0];
        }
        for (int i = 1; i < triangle.size(); i++)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                int t1, t2;
                t1 = t2 = 999999999;
                if (j <= i - 1)
                {
                    t1 = triangle[i][j] + triangle[i - 1][j];
                }
                if (j - 1 >= 0)
                {
                    t2 = triangle[i][j] + triangle[i - 1][j - 1];
                }
                //printf("%d:%d   %d %d %d\n",i,j,t1,t2,t3);
                triangle[i][j] = min(t1, t2);
            }
        }
        int ans = 2147483647;
        for (int i = 0; i < triangle[triangle.size() - 1].size(); i++)
        {
            ans = min(ans, triangle[triangle.size() - 1][i]);
        }
        return ans;
    }
};

//DPS解法，但會超時，另外這題說明有問題，查了網路才說不能往左走只能往下或右下
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        if (0 == triangle.size())
            return 0;

        long temp = 0;
        long ans = INT_MAX;
        dfs(triangle, temp, ans, 0, 0);

        return ans;
    }

    void dfs(vector<vector<int>> triangle, long temp, long &ans, int x, int y)
    {

        if (y < 0 || y >= triangle[x].size())
            return;

        temp += triangle[x][y];
        if (x == triangle.size() - 1)
        {
            ans = min(temp, ans);
            return;
        }

        dfs(triangle, temp, ans, x + 1, y);
        dfs(triangle, temp, ans, x + 1, y + 1);
        temp -= triangle[x][y];
    }
};