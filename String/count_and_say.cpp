#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  	string countAndSay(int n) {
		if(n == 1) {
			return "1";
		}

		string shortAns = countAndSay(n-1);

		if(shortAns.length() == 1) {
			shortAns = to_string(1) + shortAns;
			return shortAns;
		}

		int count = 1, i;
		string ans = "";
		for(i=0; i<shortAns.length()-1; i++) {
			if(shortAns[i] == shortAns[i+1]) {
				count++;
				continue;
			}

			if(shortAns[i] != shortAns[i+1]) {
				ans = ans + to_string(count) + shortAns[i];
				count = 1;
			}

			if(i == shortAns.length()-2 && count == 1) {
				ans = ans + to_string(count) + shortAns[i+1];
			}
		}

		if(count > 1) {
			ans = ans + to_string(count) + shortAns[i];
		}

		return ans;
	}
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        Solution obj;
       	string s = obj.countAndSay(n);
        cout <<s<< endl;
    }
}
 