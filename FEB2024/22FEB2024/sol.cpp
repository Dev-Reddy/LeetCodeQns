class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        vector<int> f(n + 1, 0);

        for (int i = 0; i < trust.size(); i++)
        {
            f[trust[i][1]]++;
            f[trust[i][0]]--;
        }

        for (int i = 1; i < f.size(); i++)
        {
            if (f[i] == n - 1)
            {
                return i;
            }
        }

        return -1;
    }
};