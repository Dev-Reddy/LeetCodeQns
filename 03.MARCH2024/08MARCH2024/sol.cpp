class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        unordered_map<int, int> map;
        int mf = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
            if (map[nums[i]] > mf)
            {
                mf = map[nums[i]];
                count = 0;
            }

            if (map[nums[i]] == mf)
            {
                count++;
            }
        }
        return count * mf;
    }
};