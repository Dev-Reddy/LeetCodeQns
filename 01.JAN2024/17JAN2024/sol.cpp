class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> f;
        for (int i = 0; i < arr.size(); i++)
        {
            f[arr[i]]++;
        }

        unordered_set<int> s;

        for (auto i = f.begin(); i != f.end(); i++)
        {
            if (s.find(i->second) != s.end())
            {
                return false;
            }
            else
            {
                s.insert(i->second);
            }
        }

        return true;
    }
};