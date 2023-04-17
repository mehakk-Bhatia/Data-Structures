class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int maxi = INT_MIN;
        for(int i=0 ; i<candies.size() ; i++){
            maxi = max(maxi , candies[i]);
        }
        int a ;
        for(int i=0 ; i<candies.size() ; i++){
            a=0;
            a = candies[i]+ extraCandies;
            if(a>=maxi){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }


        }
        return v;
        
    }
};
