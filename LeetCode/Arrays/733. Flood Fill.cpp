class Solution {
public:
    void helper(vector<vector<int>> &image, int sr, int sc, int newColor, int oldColor) {
        int m = image.size();
        int n = image[0].size();
        
        if(image[sr][sc] == oldColor) { 
            image[sr][sc] = newColor;
        }
        
        if(sr+1<m && image[sr+1][sc] == oldColor)
            helper(image, sr+1, sc, newColor, oldColor);
        
        if(sc+1<n && image[sr][sc+1] == oldColor)
            helper(image, sr, sc+1, newColor, oldColor);
        
        if(sr-1>=0 && image[sr-1][sc] == oldColor)
            helper(image, sr-1, sc, newColor, oldColor);
        
        if(sc-1>=0 && image[sr][sc-1] == oldColor)
            helper(image, sr, sc-1, newColor, oldColor);
        
        return;
        
    }
     
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor)
            return image;
        
        helper(image, sr, sc, newColor, image[sr][sc]);
        return image;
    }
};