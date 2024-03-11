class Solution
{
public:
    string customSortString(string order, string s)
    {

        string ans = "";
        unordered_map<char, int> m;

        for (auto i : s)
        {
            m[i]++;
        }

        for (auto i : order)
        {
            while (m[i] > 0)
            {
                ans += i;
                m[i]--;
            }
        }

        for (auto i : m)
        {
            while (i.second > 0)
            {
                ans += i.first;
                i.second--;
            }
        }

        return ans;
    }
};