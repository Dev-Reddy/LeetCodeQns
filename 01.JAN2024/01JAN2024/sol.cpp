class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int count = 0, j = 0;
        while (count < g.size() && j < s.size()) {
            if (s[j] >= g[count]) {
                count++;
            }
            j++;
        }

        return count;
    }
};