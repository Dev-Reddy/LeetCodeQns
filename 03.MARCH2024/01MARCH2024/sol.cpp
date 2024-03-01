class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int c0 = 0;
        int c1 = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                c1++;
            else
                c0++;
        }

        string ans = string(c1 - 1, '1') + string(c0, '0') + '1';
        return ans;
    }
};

// class Solution {
// public:
//     string maximumOddBinaryNumber(string s) {
//         unordered_map<char,int>map;

//         for(int i = 0;i<s.size();i++){
//             map[s[i]]++;
//         }

//         string ans = "";
//         if(map['1']==1){
//             while(map['0']){
//                 ans.push_back('0');
//                 map['0']--;
//             }
//             ans.push_back('1');
//         } else {
//             while(map['1']>1){
//                 ans.push_back('1');
//                 map['1']--;
//             }
//             while(map['0']){
//                 ans.push_back('0');
//                 map['0']--;
//             }
//             ans.push_back('1');
//         }

//         return ans;

//     }
// };