#include<bits/stdc++.h>
using namespace std;

vector<int> findMaxMin(int *arr, int n) {
	int min = INT_MAX, max = INT_MIN;
	vector<int> ans;

	for(int i=0; i<n; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}

		if(min > arr[i]) {
			min = arr[i];
		}
	}
	
	ans.push_back(min);
	ans.push_back(max);

	return ans;
}

int main()
{
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		int *arr = new int[n];
		vector<int> v;

		for(int i=0; i<n; i++) {
			cin>>arr[i];
		}

		v = findMaxMin(arr, n);
		cout<<v[0]<<" "<<v[1];
	}

	return 0;
}