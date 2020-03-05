class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        if (strs.size() == 0)
        {
            return "";
        }

        string ans = "";
        int min_len = INT_MAX;

        for (int i = 0; i < strs.size(); i++)
        {
            min_len = min(int(strs[i].length()), min_len);
        }
        for (int i = 0; i < min_len; i++)
        {
            char temp = strs[0][i];
            int count = 1;
            while (count < strs.size())
            {
                if (temp != strs[count][i])
                {
                    goto output;
                }
                count++;
            }
            ans += temp;
        }
    output:
        return ans;
    }
};