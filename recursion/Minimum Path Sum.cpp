class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int a = grid.size();
        int b = grid[0].size();
        int dp[a][b];
        dp[0][0] = grid[0][0];
        for(int i=0 ; i<a ; i++){
            for(int j = 1 ; j< b ; j++){
                dp[0][j] = grid[0][j] + dp[0][j-1];
            }
        }

        for(int j=0 ; j<b ; j++){
            for(int i = 1 ; i<a ; i++){
                dp[i][0] = grid[i][0] + dp[i-1][0];
            }
        }

        for(int i=1 ; i<a ; i++){
            for(int j = 1 ; j<b ; j++){
                dp[i][j] = grid[i][j] + min(dp[i-1][j] , dp[i][j-1]);
            }
        }
        return dp[a-1][b-1];
        
    }
};
