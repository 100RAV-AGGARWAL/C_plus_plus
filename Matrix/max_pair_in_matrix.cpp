#include <bits/stdc++.h>
using namespace std;
#define N 5

int maxPair(int m[][N])
{
	int maxMat[N][N], maxValue = INT_MIN;

	maxMat[N-1][N-1] = m[N-1][N-1];
	
	maxValue = m[N-1][N-1];
	for(int i=N-2; i>=0; i--) {
		if(m[i][N-1] > maxValue) {
			maxValue = m[i][N-1];
		}
		maxMat[i][N-1] = maxValue;
	}
	
	maxValue = m[N-1][N-1];
	for(int i=N-2; i>=0; i--) {
		if(m[N-1][i] > maxValue) {
			maxValue = m[N-1][i];
		}
		maxMat[N-1][i] = maxValue;
	}

	for(int i=N-2; i>=0; i--) {
		for(int j=N-2; j>=0; j--) {
			if(maxMat[i+1][j+1] - m[i][j] > maxValue) {
				maxValue = maxMat[i+1][j+1] - m[i][j];
			}

			maxMat[i][j] = max(m[i][j], max(maxMat[i+1][j]), maxMat[i][j+1]);
		}
	}

	return maxValue;
}

int main()
{
	int mat[N][N] = {
		{1, 2, -1, -4, -20},
		{-8, -3, 4, 2, 1},
		{3, 8, 6, 1, 3},
		{-4, -1, 1, 7, -6},
		{0, -4, 10, -5, 1}};

	cout << "Maximum Value is " << maxPair(mat);

	return 0;
}