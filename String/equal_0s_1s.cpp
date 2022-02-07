#include<bits/stdc++.h>
using namespace std;

int countSubstr(string s) {
	int count0 = 0, count1 = 0, strcount=0;

	for(int i=0; i<s.length(); i++) {
		if(s[i] == '0') count0++;
		else count1++;

		if(count0 == count1) strcount++;
	}

	if(count0 != count1) return -1;

	return strcount;
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		string s;
		cin>>s;

		cout<<countSubstr(s)<<endl;
	}

	return 0;
}