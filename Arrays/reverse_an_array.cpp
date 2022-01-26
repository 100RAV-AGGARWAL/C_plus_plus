#include<bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int n) {
	int start = 0, end = n-1;

	while(start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
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

		reverseArray(arr, n);

		for(int i=0; i<n; i++) {
			cout<<arr[i]<<" ";
		}

	}

	return 0;
}