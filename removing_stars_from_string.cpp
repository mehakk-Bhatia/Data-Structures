class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0 ; i<s.length() ; i++){
            st.push(s[i]);
            if(st.top() == '*'){
                st.pop();
                st.pop();
            }
        }
        string ans = "";
        while(!st.empty()){
            char m = st.top();
            st.pop();
            ans.push_back(m);
        }
        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};
