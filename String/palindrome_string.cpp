#include <bits/stdc++.h>
using namespace std;

class Solution{
public:		
	int isPalindrome(string S)
	{
		int len = S.length(), left, right;

		if(len == 1) 
			return true;
			
		if(len == 2) {
			if(S[0] == S[1]) {
				return true;
			}
			return false;
		}

		if(len%2 == 0) {
			left = (len%2) - 1;
			right = (len%2);
		} else {
			left = (len%2) - 1;
			right = (len%2) + 1;
		}

		while(left >= 0 && right < len) {
			if(S[left] != S[right]) {
				return 0;
			}
			left--;
			right++;
		}
		return 1;
	}

};

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
} 