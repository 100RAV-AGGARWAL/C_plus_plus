#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        int ans = 1, steps = arr[0], mxd = arr[0];
		
		if(n == 1) {
			return 0;
		} else if(arr[0] == 0) {
			return -1;
		} else {
			for(int i=1; i<n; i++) {
				if(i == n-1) {
					return ans;
				}

				mxd = max(mxd, arr[i]+i);
				steps--;

				if(steps == 0) {
					ans++;
					if(i >= mxd) {
						return -1;
					}
					steps = mxd - i;
				}
			}
		}

    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
