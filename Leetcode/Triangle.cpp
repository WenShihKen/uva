//DP
class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        if (0 == triangle.size())
            return 0;
        if (1 == triangle.size())
            return triangle[0][0];

        for (int i = 1; i < triangle.size(); i++)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {

                if (j == 0)
                {
                    triangle[i][j] += triangle[i - 1][j];
                }
                else if (j == triangle[i].size() - 1)
                {
                    triangle[i][j] += triangle[i - 1][j - 1];
                }
                else
                {
                    triangle[i][j] = min(triangle[i][j] + triangle[i - 1][j], triangle[i][j] + triangle[i - 1][j - 1]);
                }
            }
        }

        int ans = INT_MAX;
        for (int i = 0; i < triangle[triangle.size() - 1].size(); i++)
        {
            ans = min(ans, triangle[triangle.size() - 1][i]);
        }
        return ans;
    }
};

//DPS解法，但會超時，另外這題說明有問題，查了網路才說不能往左走只能往下或右下
// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         if(0 == triangle.size())
//             return 0;

//         long temp = 0;
//         long ans = INT_MAX;
//         dfs(triangle, temp, ans, 0, 0);

//         return ans;
//     }

//     void dfs(vector<vector<int>> triangle, long temp, long &ans, int x, int y){

//         if(y<0 || y>=triangle[x].size())
//             return;

//         temp += triangle[x][y];
//         if(x == triangle.size()-1){
//             ans = min(temp, ans);
//             return;
//         }

//         dfs(triangle, temp, ans, x+1, y);
//         dfs(triangle, temp, ans, x+1, y+1);
//         temp -= triangle[x][y];

//     }
// };