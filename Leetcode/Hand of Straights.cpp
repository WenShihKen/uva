class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int W)
    {
        map<int, int> temp;
        for (auto i : hand)
            temp[i]++;
        while (!temp.empty())
        {
            int t = temp.begin()->first;
            for (int i = 0; i < W; i++)
            {
                if (!temp[t + i])
                {
                    return false;
                }
                temp[t + i]--;
                if (0 == temp[t + i])
                {
                    temp.erase(t + i);
                }
            }
        }
        return true;
    }
};