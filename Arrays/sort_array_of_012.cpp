#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        unordered_map<int, int> m;
		for(int i=0; i<n; i++) {
			m[a[i]]++;
		}

		int i;
		for(i=0; i<m[0]; i++) {
			a[i] = 0;
		}

		for(; i<m[0]+m[1]; i++) {
			a[i] = 1;
		}

		for(; i<m[0]+m[1]+m[2]; i++) {
			a[i] = 2;
		}
    }
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
