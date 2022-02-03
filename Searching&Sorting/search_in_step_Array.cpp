#include<bits/stdc++.h>
using namespace std;

int searchInStepArray(int *arr, int n, int k, int x) {
	for(int i=0; i<n; ) {
		if(arr[i] == x) {
			return i;
		}

		i = i + max(1, abs(arr[i]-x)/k)
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		int n, k;
		cin>>n>>k;

		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}

		int x;
		cin>>x;

		int pos = searchInStepArray(arr, n, k, x);
	}

	return 0;
}