#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
		int col = matrix[0].size();

		int c_max = col-1;

		for(int i=0; i<row; i++) {
			if(target < matrix[i][0]) {
				return false;
			}

			if(target > matrix[i][c_max]) {
				continue;
			}

			int start = 0, end = c_max;
			while(start <= end) {
				int mid = (start+end)/2;

				if(target == matrix[i][mid]) return true;
				else if(target > matrix[i][mid]) {
					start = mid+1;
				} else {
					end = mid-1;
				}
			}
			return false;
		}
		return false;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c, target;
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

		cin>>target;

        Solution ob;
        bool result = ob.searchMatrix(matrix, target);
        cout<<result;
        cout<<endl;
    }
    return 0;
}