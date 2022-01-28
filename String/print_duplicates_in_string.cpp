#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string s) {
	unordered_map<char, int> m;

	for(int i=0; i<s.length(); i++) {
		m[s[i]]++;
	}

	unordered_map<char, int>:: iterator it;
	for(it = m.begin(); it != m.end(); it++) {
		if(it->second > 1) {
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		string s;
		cin>>s;

		printDuplicates(s);
	}

	return 0;
}