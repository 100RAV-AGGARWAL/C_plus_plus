#include<bits/stdc++.h>
using namespace std;

void moveNegativeToBeginning(int *arr, int n) {
	int start=0, end = n-1;
	unordered_map<int, int> m;

	for(int i=0; i<n; i++) {
		m[arr[i]]++;
	}

	for(auto it : m) {
		if(it.first < 0) {
			for(int i=0; i<it.second; i++) {
				arr[start] = it.first;
				start++;
			}
		} else {
			for(int i=0; i<it.second; i++) {
				arr[end] = it.first;
				end--;
			}
		}
	}
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}

		moveNegativeToBeginning(arr, n);

		for(int i=0; i<n; i++) {
			cout<<arr[i]<<" ";
		}
	}

	return 0;
}