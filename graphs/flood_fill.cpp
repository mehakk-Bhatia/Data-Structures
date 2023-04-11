class Solution {
public:
    bool isvalid(vector<vector<int>>& image, int i, int j, int m , int n , int oldcolor){
        if(i>=0 && i<m && j>=0 && j<n && image[i][j] == oldcolor){
            return true;
        }
        return false;
    }

    void f(vector<vector<int>>& image, int i, int j,  int m , int n , int oldcolor , int color){
        image[i][j] = color;

        if(isvalid(image , i+1 , j , m , n , oldcolor)){
            f(image , i+1 , j , m, n, oldcolor , color);
        }

        if(isvalid(image , i-1 , j , m , n , oldcolor)){
            f(image , i-1 , j , m, n, oldcolor , color);
        }

        if(isvalid(image , i , j+1 , m , n , oldcolor)){
            f(image , i , j+1 , m, n, oldcolor , color);
        }

        if(isvalid(image , i , j-1 , m , n , oldcolor)){
            f(image , i , j-1 , m, n, oldcolor , color);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int oldcolor = image[sr][sc];

        if(oldcolor == color){
            return image;
        }
        f(image , sr , sc, m , n , oldcolor , color);
        return image;

        
    }
};
