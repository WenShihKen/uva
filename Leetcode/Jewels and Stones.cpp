class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        map<char, int> temp1, temp2;
        int ans = 0;
        for (auto i : J)
            temp1[i]++;
        for (auto i : S)
            temp2[i]++;
        for (auto i : temp1)
        {
            if (temp2[i.first] != 0)
            {
                ans += temp2[i.first];
            }
        }
        return ans;
    }
};