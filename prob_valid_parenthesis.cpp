class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int l = s.length();
        if(s[0] == '(' || s[0] == '[' || s[0] == '{') {
            st.push(s[0]);
        }
        else {
            return false;
        }
        int i=1;
        while ( i<l ){
           if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
            
            // cout<<st.top();
           } 
           else{
               if(st.empty()){
                   return false;
               }
               if(s[i] == ')' && st.top() == '('){
                   st.pop();
               }
               else if(s[i] == ']' && st.top() == '['){
                   st.pop();
               }
               else if(s[i] == '}' && st.top() == '{'){
                   st.pop();
               }
               else {
                   return false;
               }
               
           }
           i++;
        //    cout<<st.top();

        }
        
        return st.empty();


        
    }
};
