#include<bits/stdc++.h>
using namespace std;

void leaders(int *arr, int n) {
	vector<int> v;
	v.push_back(arr[n-1]);

	for(int i=n-2; i>=0; i--) {
		if(arr[i] > arr[i+1]) {
			v.push_back(arr[i]);
		}
	}

	for(int i=v.size()-1; i>=0; i--)
		cout<<v[i]<<" ";
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		int arr[n];

		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}

		leaders(arr, n);
	}

	return 0;
}