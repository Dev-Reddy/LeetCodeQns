class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }

        vector<vector<int>> ans;

        while (map.size() != 0) {
            vector<int> temp;
            for (auto i = map.begin(); i != map.end(); i++) {
                temp.push_back(i->first);
                i->second--;
            }
            
            for (auto it = map.begin(); it != map.end();) {
                if (it->second == 0) {
                    int a = it->first;
                    it = map.erase(it);
                } else {
                    ++it;
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};