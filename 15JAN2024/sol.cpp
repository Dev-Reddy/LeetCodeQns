class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        unordered_map<int, int> lF; // lossFreq
        int n = matches.size();
        for (int i = 0; i < n; i++)
        {
            if (lF.find(matches[i][0]) == lF.end())
            {                          // not in map
                lF[matches[i][0]] = 0; // setting lost freq to 0 as it was not in map
                                       // and has won its first match
            }
            lF[matches[i][1]]++; // increase loss freq for loser
        }

        vector<int> a1;
        vector<int> a2;
        for (auto i : lF)
        {
            if (i.second == 0)
            {
                a1.push_back(i.first);
            }
            else if (i.second == 1)
            {
                a2.push_back(i.first);
            }
        }
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        return {a1, a2};
    }
};