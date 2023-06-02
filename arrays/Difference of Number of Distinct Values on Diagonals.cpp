class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        vector<vector<int>> ans;
        
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0 ; i<m ; i++){
            vector<int> row;
            for(int j=0 ; j<n ; j++){
                int a=i-1 , b=j-1;
                unordered_set<int> s1;
                while(a>=0 && b>=0){
                    s1.insert(grid[a][b]);
                    a--;
                    b--;
                    
                }
                unordered_set<int>s2;
                a=i+1 , b=j+1;
                while(a<m && b<n){
                    s2.insert(grid[a][b]);
                    a++;
                    b++;
                    
                }
                int x = s1.size() , y = s2.size(); 
                int temp = abs(x - y);
                row.push_back(temp);
                
            }
            ans.push_back(row);
        }
        return ans;
        
    }
};
