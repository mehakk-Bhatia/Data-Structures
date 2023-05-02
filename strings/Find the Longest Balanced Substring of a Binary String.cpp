class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        if(s.length() == 0){
            return 0;
        }
        int ans =0 , cnt0 = 0 , cnt1 = 0 , i=0;
        while(i<s.length()){
            while(s[i] == '0'){
                cnt0++;
                i++;
            }
            while(s[i] == '1'){
                cnt1++;
                i++;
            }
            ans = max(ans , min(cnt0 , cnt1));
            cnt0 = 0;
            cnt1 = 0;
        }
        
        // if (cnt0 == 0){
        //     return 0;
        // }
        return 2*ans;
        
    }
};
