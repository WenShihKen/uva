class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
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
                int count = min(temp1[i.first], temp2[i.first]);
                while (count--)
                    ans.push_back(i.first);
            }
        }
        return ans;
    }
};