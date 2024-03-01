class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        unordered_map<int, int> f;
        for (auto i : arr)
        {
            f[i]++;
        }
        vector<int> v;
        for (auto i : f)
        {
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            int temp = v[i];
            if (k == 0 || k < temp)
            {
                return v.size() - i;
            }
            k -= temp;
        }

        return 0;
    }
};