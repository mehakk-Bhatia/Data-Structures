class Solution {
public:
    void f(vector<int>& nums , int i ,vector<vector<int>> &res, vector<int> op ){
        if(i >= nums.size()){
            res.push_back(op);
            return;
        }
        f(nums , i+1 , res , op);

        op.push_back(nums[i]);
        f(nums , i+1 , res , op);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> op;
        int i=0;
        f(nums , i , res , op);
        return res;
        
    }
};
