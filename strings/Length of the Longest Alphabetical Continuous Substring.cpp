class Solution {
public:
    int longestContinuousSubstring(string s) {
        long long cnt=0 ; 
        long long ans=0;
        for(int i=0 ; i<s.length()-1 ; i++){
            long long a = s[i] , b = s[i+1];
            // cout<<b-a<<endl;
            if(b-a == 1){
                cnt++;
            }
            else{
                
                cnt=0;
            }
            ans = max(ans , cnt);
        }
        return ans+1;
    
    }
};
