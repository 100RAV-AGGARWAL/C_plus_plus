#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> mat[i][j];
		int r;
		cin >> r;
		cout << kthSmallest(mat, n, r) << endl;
	}
	return 0;
}

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
	int high = mat[n - 1][n - 1], low = mat[0][0], mid;

	while (low <= high)
	{
		mid = (low + high) / 2;
		int count = 0;

		for (int i = 0; i < n; i++)
		{
			auto itr = upper_bound(mat[i], mat[i] + n, mid);
			count += itr - (&mat[i][0]);
		}

		if (count >= k)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return low;
}
