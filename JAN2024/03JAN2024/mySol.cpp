class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>f(bank.size());

        for(int i = 0;i<bank.size();i++){
            for(int j = 0; j< bank[i].size();j++){
                if(bank[i][j]=='1'){
                    f[i]++;
                }
            }
        }

        int i = 0;

        while(i<f.size()-1){
            if(f[i]>0){
                break;
            }
            i++;
        }

        if(i==f.size()-1){
            return 0;
        }

        int j = i+1;
        int ans = 0;
        while(j<f.size()){
            if(f[j]==0){
                j++;
            } else {
                ans+=f[i]*f[j];
                i=j;
                j++;
            }
        }

        return ans;
    }
};