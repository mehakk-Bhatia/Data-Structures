class Solution {
public:
     int countDigits(int n)
    {
        int ele=n;
        if (n == 0)
        return 1;
        int count = 0;
        while (n != 0) {
            n = n / 10;
            ++count;
        }
        
        if(ele<0)
            count++;
        
        return count;
    }
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> ans;
        int m = grid.size();
        int n = grid[0].size();
        int cnt , maxi=INT_MIN , mini = INT_MAX;
        for (int i = 0; i < n; i++) {
            maxi = grid[0][i];
            mini = grid[0][i];
            for (int j = 1; j < m; j++) {
                if (grid[j][i] > maxi)
                    maxi = grid[j][i];
                
                if (grid[j][i] < mini)
                    mini = grid[j][i];
            }
            int a =countDigits(maxi);
            int b= countDigits(mini);
            ans.push_back(max(a,b));
            
            
            
    }
        
        return ans;    
    }
};
