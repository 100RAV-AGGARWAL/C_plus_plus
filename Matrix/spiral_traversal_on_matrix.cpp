#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        bool left2right = true, up2down = false, right2left = false, down2up = false;
		int r_min = 0, r_max = r-1, c_min = 0, c_max = c-1;
		vector<int> ans;

		while(r_min <= r_max && c_min <= c_max) {
			if(left2right) {
				for(int i=c_min; i<=c_max; i++) {
					ans.push_back(matrix[r_min][i]);
				}
				r_min++;
				up2down = true;
				left2right = false;
			} else if(up2down) {
				for(int i=r_min; i<=r_max; i++) {
					ans.push_back(matrix[i][c_max]);
				}
				c_max--;
				right2left = true;
				up2down = false;
			} else if(right2left) {
				for(int i=c_max; i>=c_min; i--) {
					ans.push_back(matrix[r_max][i]);
				}
				r_max--;
				right2left = false;
				down2up = true;
			} else if(down2up) {
				for(int i=r_max; i>=r_min; i--) {
					ans.push_back(matrix[i][c_min]);
				}
				c_min++;
				left2right = true;
				down2up = false;
			} else {
				continue;
			}
		}

		return ans;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}