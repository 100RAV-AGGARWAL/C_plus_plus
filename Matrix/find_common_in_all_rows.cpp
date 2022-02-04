#include<bits/stdc++.h>
using namespace std;
#define n 5
#define m 4

vector<int> commonInRow(int mat[][n]) {
	vector<int> ans;
	unordered_map<int, int> mp;

	for(int i=0; i<m; i++) {
		set<int> s1;

		for(int j=0; j<n; j++) {
			s1.insert(mat[i][j]);
		}

		for(auto it : s1) {
			mp[it]++;
		}
	}

	for(auto it : mp) {
		if(it.second == m) {
			ans.push_back(it.first);
		}
	}

	return ans;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int mat[m][n];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> mat[i][j];
		
		vector<int> v = commonInRow(mat);

		for(auto it : v) {
			cout<<it<<" ";
		}
	}
	return 0;
}