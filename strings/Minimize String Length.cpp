class Solution {
public:
    int minimizedStringLength(string s) {
        int ans = 0;
        unordered_set<char> res;
        for(int i=0 ; i<s.length() ; i++){
            if(s[i]!=s[i+1]){
                res.insert(s[i]);
                res.insert(s[i+1]);
            }
        }
        ans = res.size();
        return ans-1;
    }
};
