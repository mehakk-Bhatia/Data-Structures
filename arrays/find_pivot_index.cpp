class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long sum =0 , left_s =0;
        for(int i=0 ; i<nums.size() ; i++){
            sum += nums[i];
        }
        for (int i=0 ; i<nums.size() ; i++){
            sum = sum - nums[i];
            if(left_s == sum){
                return i;
            }
            left_s += nums[i];
        }
        return -1;
    }
};
