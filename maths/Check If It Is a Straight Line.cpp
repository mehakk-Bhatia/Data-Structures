class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1]; 
        // int pm = (y2 - y1)/(x2 - x1);
        for(int i=2 ; i<coordinates.size() ; i++){
            int x3 = coordinates[i][0];
            int y3 = coordinates[i][1];
            if ((x3 - x1) * (y2 - y1) != (y3 - y1) * (x2 - x1)) {
                return false;
            }
            // int m = (d - c)/(b - a);
            // if(pm != m){
            //     return false;
            // }
            // pm = m
        }
        return true;
        
    }
};
