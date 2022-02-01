#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
	bool checkPalin(string s) {
		int low = 0, high = s.length()-1;

		while(low < high) {
			if(s[low] != s[high]) {
				return false;
			}
			low++;
			high--;
		}
		return true;
	}

    string longestPalin (string S) {
		int len = S.length();
        if(len == 0 || len == 1) {
			return S;
		}

		string maxStr = "";
		for(int i=0; i<len; i++) {
			string subStr = "";

			for(int j=i; j<len; j++) {
				subStr += S[j];

				if(checkPalin(subStr)) {
					if(maxStr.length() < subStr.length()) {
						maxStr = subStr;
					}
				}
			}
		}

		return maxStr;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}