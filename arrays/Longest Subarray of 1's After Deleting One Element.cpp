class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0 , n = nums.size() , cnt1=0 , cnt0=0 , idx , idx2;

        for(int i=0 ; i<n; i++){
             if(nums[i] == 1){
                cnt1++;
            }
            else{
                cnt0++;
            }
            
        }
        if(cnt1 == n){
            return n-1;
        }
        if(cnt0 == n){
            return 0;
        }
        cnt0=0,cnt1=0;
        for(int i=0 ; i <n ; i++ ){
            if(nums[i] == 1){
                cnt1++;
            }
            else{
                if(cnt1 > 0 && cnt0 == 0){
                    
                    cnt0 = 1;
                    idx = i;
                }
                else if(cnt0 > 0){
                    idx2 = i;
                    ans = max(ans , cnt1);
                    
                    cnt1=idx2 - idx - 1;
                    idx = idx2;
                }
            }
            ans = max(ans , cnt1);
            
            
        }
        return ans;
        
    }
};
