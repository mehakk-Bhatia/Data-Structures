class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i=0 , j=0;
        int s1 = word1.length() , s2 = word2.length();
        while(i<s1 && j<s2){
            merged += word1[i];
            i++;
            merged += word2[j];
            j++;

        }
        while(i<s1){
            merged += word1[i];
            i++;
        }
        while(j<s2){
            merged += word2[j];
            j++;
        }
        return merged;
        
    }
};
