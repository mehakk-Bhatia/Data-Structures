class Solution {
public:
    string removeTrailingZeros(string num) {
        int i;
        string ans = "";
        for( i=num.length()-1 ; i>=0; i--){
            if(num[i] != '0'){
                break;
            }
        }
        for(int j = 0 ; j<=i ; j++){
            ans.push_back(num[j]);
        }
        return ans;
        
    }
};
