#include<bits/stdc++.h>
using namespace std;

bool validShuffle(string str1, string str2, string str3) {
	if(str3.length() != (str1.length() + str2.length())) return false;

	unordered_map<char, int> m1, m2;
	set<char> s;

	for(int i=0; i<str1.length(); i++) {
		m1[str1[i]]++;
		s.insert(str1[i]);
	}
	for(int i=0; i<str2.length(); i++) {
		m1[str2[i]]++;
		s.insert(str2[i]);
	}

	for(int i=0; i<str3.length(); i++) {
		m2[str3[i]]++;
	}

	for(auto it : s) {
		if(m1.count(it) != m2.count(it)) return false;
	}

	return true;
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		string str1, str2, str3;
		cin>>str1>>str2>>str3;

		cout<<validShuffle(str1, str2, str3);

	}

	return 0;
}