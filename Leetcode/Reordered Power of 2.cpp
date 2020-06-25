class Solution
{
public:
    bool reorderedPowerOf2(int N)
    {
        vector<string> two;
        long long int start = 1;
        while (start <= 1000000000)
        {
            string temp = to_string(start);
            sort(temp.begin(), temp.end());
            two.push_back(temp);
            start *= 2;
        }
        string t = to_string(N);
        sort(t.begin(), t.end());
        for (auto i : two)
        {
            if (i == t)
            {
                return true;
            }
        }
        return false;
    }
};