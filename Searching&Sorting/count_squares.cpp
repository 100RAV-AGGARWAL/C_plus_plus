#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquares(int N) {
		int count = 0;

		if(N < 1) {
			return 0;
		}

		for(int i=1; i*i<N; i++) {
			count++;
		}

		return count;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
} 