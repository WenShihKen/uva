class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        if (arr.size() <= 1)
            return ans;
        int mm = 9999999;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            mm = min(mm, arr[i + 1] - arr[i]);
        }
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i + 1] - arr[i] == mm)
            {
                ans.push_back(vector<int>{arr[i], arr[i + 1]});
            }
        }
        return ans;
    }
};