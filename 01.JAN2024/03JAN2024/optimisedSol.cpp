class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        vector<int>f(bank.size());
        int ans = 0;
        int prev = 0;
        for(int i = 0;i<bank.size();i++){
            for(int j = 0; j< bank[i].size();j++){
                if(bank[i][j]=='1'){
                    f[i]++;
                }
            }
            if(f[i]>0){
                ans+=f[i]*prev;
                prev = f[i]; 
            }
        }

        return ans;
    }
};