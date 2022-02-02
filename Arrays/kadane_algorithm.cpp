#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        long long s = 0, maxSum = INT_MIN;

		for(int i=0; i<n; i++) {
			s += arr[i];

			if(s < arr[i]) {
				s = arr[i];
			}

			if(s > maxSum) {
				maxSum = s;
			}
		}

		return maxSum;
    } 
};

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
