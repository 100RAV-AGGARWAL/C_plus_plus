#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);

		int maxNum = 0, minNum = 0, diff = arr[n-1] - arr[0];

		for(int i=1; i<n; i++) {
			if(arr[i] >= k) {
				maxNum = max(arr[i-1]+k, arr[n-1]-k);
				minNum = min(arr[0]+k, arr[i]-k);
				diff = min(diff, maxNum-minNum);
			}
		}

		return diff;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}