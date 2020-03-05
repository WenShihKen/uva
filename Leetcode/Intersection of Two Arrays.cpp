class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        map<int, int> temp1, temp2;
        for (auto i : nums1)
            temp1[i]++;
        for (auto i : nums2)
            temp2[i]++;
        for (auto i : temp1)
        {
            if (temp1[i.first] && temp2[i.first])
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};