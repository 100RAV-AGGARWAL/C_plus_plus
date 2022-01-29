#include<bits/stdc++.h>
using namespace std;

bool checkRotation(string str1, string str2) {
	if(str1.length() != str2.length()) {
		return false;
	}

	string concat = str1+str1;
	int len = concat.length();
	int len2 = str2.length();

	for(int i=0; i<len-len2+1; i++) {
		string temp = concat.substr(i, len2);
		
		if(str2 == temp) return true;
	}
	return false;
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		string str1, str2;
		cin>>str1>>str2;

		cout<<checkRotation(str1, str2);
	}

	return 0;
}