#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		void permut(string &s, bool &flag) {
			int i = s.length() - 2;

			while(i >= 0 && s[i] >= s[i+1]) {
				i--;
			}

			if(i == -1) {
				flag = false;
			} else {
				int n = s.length();
				for(int j = n-1; j>i; j--) {
					if(s[j] > s[i]) {
						swap(s[j], s[i]);
						break;
					}
				}
				reverse(s.begin()+i+1, s.end());
			}
			return;
		}

		vector<string>find_permutation(string S)
		{
		    sort(S.begin(), S.end());
			vector<string> ans;
			bool flag = true;

			while(flag) {
				ans.push_back(S);
				permut(S, flag);
			}
			return ans;
		}
};

int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
