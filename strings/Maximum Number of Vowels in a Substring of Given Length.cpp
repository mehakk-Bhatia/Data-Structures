class Solution {
public:
    int maxVowels(string s, int k) {
        int cnt = 0 , ans = INT_MIN;
        for (int i=0 ; i<k ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt++;
            }
        }
        ans = max(ans , cnt);

        for(int i=k ; i<s.length(); i++){
            if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u'){
                cnt--;
            }

            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt++;
            }

            ans = max(ans , cnt);
            
        }
        return ans;
    }
};
