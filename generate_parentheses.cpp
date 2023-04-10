class Solution {
public:
    void f(int open , int close , string s , vector<string> &v){
        if(open == 0 && close == 0){
            v.push_back(s);
            return;
        }
        if(open != 0){
            string s1 = s;
            s1.push_back('(');
            f(open-1 , close , s1 , v);
        }
        if(close > open){
            string s2 = s;
            s2.push_back(')');
            f(open , close-1 , s2 , v);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> v;
        int open = n , close = n;
        string s = "";
        f(open , close , s , v);

        return v;
    }
};
