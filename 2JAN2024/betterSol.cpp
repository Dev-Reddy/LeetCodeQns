#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        vector<int>p(201,0);
        for(int i=0;i<nums.size();i++)
        {
            p[nums[i]]++;
        }
        int n=nums.size();
        vector<vector<int>> res;
         while(n>0){
            vector<int> ans;
            for(int x=0;x<201;x++){
                if(p[x]>0){
                    ans.push_back(x);
                    p[x]--;
                    n--;
                }
            }
            res.push_back(ans);
        }

        return res;
        
    }
};