class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> ans(rowIndex + 1, 1);
        for (int i = 1; i <= rowIndex; i++)
        {
            int t1 = 1;
            for (int j = 1; j < i; j++)
            {
                int t2 = ans[j];
                ans[j] += t1;
                t1 = t2;
            }
        }
        return ans;
    }
};