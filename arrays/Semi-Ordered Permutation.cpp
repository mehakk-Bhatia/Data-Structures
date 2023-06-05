class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int ans = 0 , n = nums.size();
        if(nums[0] == 1  && nums[n-1] == n){
            return 0;
        }
        int id1 , idn;
        for(int i =0 ; i<nums.size() ; i++){
            if(nums[i] == 1){
                id1 = i;
            }
            if(nums[i] == n){
                idn = i;
            }
        }
        int diff = n-idn;
        if(idn<id1){
            ans =  (diff-1)+id1-1;
        }
        else if(id1<idn){
            ans = diff+id1-1;
        }
        return ans;
        
        
    }
};
