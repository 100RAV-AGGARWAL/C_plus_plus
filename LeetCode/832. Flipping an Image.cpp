class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0; i<image.size(); i++) {
            int start = 0, end = image.size()-1;
            while(start<=end) {
                swap(image[i][start], image[i][end]);
                image[i][start] == 0 ? image[i][start] = 1 : image[i][start] = 0;
                if(start!=end)
                image[i][end] == 0 ? image[i][end] = 1 : image[i][end] = 0;
                start++;
                end--;
            }
        }
        
        return image;
    }
};