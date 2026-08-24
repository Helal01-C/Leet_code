class Solution
{
public:
    string build(string s)
    {
        string ans;

        for (char ch : s)
        {
            if (ch == '#')
            {
                if (!ans.empty())
                {
                    ans.pop_back();
                }
            }
            else
            {
                ans.push_back(ch);
            }
        }

        return ans;
    }

    bool backspaceCompare(string s, string t)
    {
        return build(s) == build(t);
    }
};