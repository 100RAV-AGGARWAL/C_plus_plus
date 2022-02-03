#include<bits/stdc++.h>
using namespace std;

void printSubsequences1(string s) {
	int len = s.length();

	for(int i=0; i<len; i++) {
		for(int j=i; j<len; j++) {
			cout<<s.substr(i, len-j);
			cout<<endl;
		}
		// cout<<endl;
	}
}

void printSubsequences2(string s, string output) {
	if(s.length() == 0) {
		cout<<output;
		cout<<endl;
		return;
	}

	printSubsequences2(s.substr(1), output+s[0]);
	printSubsequences2(s.substr(1), output);
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		string s;
		cin>>s; 

		// printSubsequences1(s);
		printSubsequences2(s , "");
	}

	return 0;
}