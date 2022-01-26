#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &v) {
	int start = 0, end = v.size() - 1;

	while(start < end) {
		char temp = v[start];
		v[start] = v[end];
		v[end] = temp;

		start++;
		end--;
	}
} 

int main()
{
	int t;
	cin>>t;

	while(t--) {
		string s;
		cin>>s;

		vector<char> str;
		for(int i=0; i<s.length(); i++) {
			str.push_back(s[i]);
		}

		reverseString(str);

		for(int i=0; i<str.size(); i++) {
			cout<<str[i];
		}
	}

	return 0;
}