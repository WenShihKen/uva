class Solution
{
public:
    vector<string> commonChars(vector<string> &A)
    {
        vector<vector<int>> temp(A.size(), vector<int>());
        for (int i = 0; i < A.size(); i++)
        {
            temp[i].resize(26);
            for (int j = 0; j < A[i].length(); j++)
            {
                temp[i][A[i][j] - 'a']++;
            }
        }

        vector<string> ans;
        for (int i = 0; i < 26; i++)
        {
            int count = INT_MAX;
            for (int j = 0; j < A.size(); j++)
            {
                count = min(count, temp[j][i]);
            }
            while (count--)
            {
                string c;
                c += 'a' + i;
                ans.push_back(c);
            }
        }
        return ans;
    }
};