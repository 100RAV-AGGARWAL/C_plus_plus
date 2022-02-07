#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
		sort(arr.begin(), arr.end());
		int len = arr.size();
		vector<int> ans;

		for(int i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				int k2 = k - arr[i] - arr[j];
				int left = j+1, right = n-1;
				while(left<right)
				{
					int two_sum=nums[left]+nums[right];
					if(two_sum<target2)
						left++;
					else if(two_sum>target2)
						right--;
					else
					{
						int le=nums[left];
						int ri=nums[right];
						ans.push_back({nums[i],nums[j],nums[left],nums[right]});
						while(left<right and nums[left]==le)
							left++;
						
						while(left<right and nums[right]==ri)
							right--;
					}
				}

				while(j+1<n and nums[j+1]==nums[j])
                   j++;
			}
			   while (i + 1 < n && nums[i + 1] == nums[i]) 
             i++;   
		}

		return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
} 