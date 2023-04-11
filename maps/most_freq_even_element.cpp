class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        for(int i=0 ; i<nums.size() ; i++){
            m[nums[i]]++;
        }
        int maxi = -1 , cnt=-1;
        for(auto x : m){
            if(x.first % 2 == 0){
                if(cnt < x.second ){
                    maxi =x.first;
                    cnt = x.second;
                }
            }
        }
        return maxi;
        
    }
};
