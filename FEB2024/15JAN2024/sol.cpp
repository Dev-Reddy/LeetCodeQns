class Solution
{
public:
    long long largestPerimeter(vector<int> &nums)
    {
        if (nums.size() < 3)
        {
            return -1;
        }
        sort(nums.begin(), nums.end());

        vector<long long> prefixSum(nums.size());
        prefixSum[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prefixSum[i] = nums[i] + prefixSum[i - 1];
        }

        for (int i = nums.size() - 1; i >= 2; i--)
        {
            if (prefixSum[i - 1] > nums[i])
            {
                return prefixSum[i];
            }
        }

        return -1;
    }
};