class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        bool val = true;
        char ans;
        for(int i=0 ; i<letters.size() ; i++){
            if(letters[i] - target > 0){
                val = true;
                ans = letters[i];
                break;
            }
            else{
                val = false;
            }
            
        }
        if(val == false){
            return letters[0];
        }
        return ans;
    }
};
