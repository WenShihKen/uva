class Solution
{
public:
    bool isValid(string s)
    {
        if (s == "")
        {
            return true;
        }

        map<char, char> _map;
        _map[']'] = '[';
        _map[')'] = '(';
        _map['}'] = '{';

        stack<char> temp;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                temp.push(s[i]);
            }
            else if (temp.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
            {
                return false;
            }
            else
            {
                if (temp.top() != _map[s[i]])
                {
                    return false;
                }
                else
                {
                    temp.pop();
                }
            }
        }
        if (temp.empty())
            return true;
        else
            return false;
    }
};