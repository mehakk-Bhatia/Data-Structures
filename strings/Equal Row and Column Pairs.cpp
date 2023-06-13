class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans=0 , m=grid.size() , n=grid[0].size();
        unordered_map <string , int> mp;
        // string a = to_string(grid[i][j]);
        for(int i=0 ; i<m ; i++){
            string a = "";
            for(int j=0 ; j<n ; j++){
                string b = to_string(grid[i][j]);
                a += b;
                a += "_";
            }
            mp[a]++;
        }

        for(int j=0 ; j<n ; j++){
            string c = "";
            for(int i=0 ; i<m ; i++){
                string d = to_string(grid[i][j]);
                c += d;
                c += "_";
            }
            if(mp[c] > 0){
                ans += mp[c];
            }
        }
        return ans;
        
    }
};
