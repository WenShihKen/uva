class Solution
{
public:
    string reverseVowels(string s)
    {
        bool *record = new bool[s.length()];
        fill(record, record + s.length(), false);
        vector<char> temp;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                record[i] = true;
                temp.push_back(s[i]);
            }
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (record[i] == true)
            {
                s[i] = temp[temp.size() - 1];
                temp.pop_back();
            }
        }
        return s;
    }
};