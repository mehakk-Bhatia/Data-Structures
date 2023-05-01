class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
         int maxi = *max_element(nums.begin(), nums.end());
        int x = 0 , ans=0;
        for(int i=0 ; i<k ; i++){
            x = maxi + i;
            ans += x;
            
        }
        return ans;
        
    }
};
