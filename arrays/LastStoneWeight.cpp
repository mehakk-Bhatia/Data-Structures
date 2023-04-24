class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        while(n>1){
            sort(stones.begin() , stones.end());
            n = stones.size();
            int a = stones[n-1];
            int b = stones[n-2];
            stones.pop_back();
            stones.pop_back();
            if(a!=b){
                stones.push_back(abs(a-b));
            }
            n = stones.size();
            if(n==0){
                return 0;
            }
        }
        return stones[0];
        
    }
};
