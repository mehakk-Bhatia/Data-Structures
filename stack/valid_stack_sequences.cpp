class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        // st.push(pushed[0]);
        int i=0 , j=0;
        while( i<pushed.size()){
            // int a = st.top();
            
            // if(a == popped[j]){
            //     st.pop();
            //     j++;
            // }
            st.push(pushed[i]);
            i++;
            // int a = st.top();
            while(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }

        }
        return st.empty();        
    }
};
