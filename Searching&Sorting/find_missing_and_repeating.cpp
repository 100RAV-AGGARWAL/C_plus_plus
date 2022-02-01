#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
		bool marked[n+1] = {false};
		int repeated, missing;
		int* ans = new int[2];

		for(int i=0; i<n; i++) {
			if(marked[arr[i]] == true) {
				repeated = arr[i];
			} else {
				marked[arr[i]] = true;
			}
		}

		for(int i=1; i<=n; i++) {
			if(marked[i] == false) {
				missing = i;
				break;
			}
		}

		ans[0] = repeated;
		ans[1] = missing;

		return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

