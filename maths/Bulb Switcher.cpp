class Solution {
public:
    int bulbSwitch(int n) {
        if(n==1){
            return 1;
        }
        int ans = floor(sqrt(n));
        return ans;
        
    }
};
