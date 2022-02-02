#include <bits/stdc++.h>
using namespace std;
#define N 5

void rotateBy90(int m[N][N]) {
	for(int i=0; i<N/2; i++) {
		for(int j=i; j<N-1-i; j++) {
			int temp = m[i][j];
			m[i][j] = m[N-1-j][i];
			m[N-1-j][i] = m[N-1-i][N-1-j];
			m[N-1-i][N-1-j] = m[j][N-1-i];
			m[j][N-1-i] = temp;
		}
	}
}

int main()
{
	int mat[N][N] = {
		{1, 2, -1, -4, -20},
		{-8, -3, 4, 2, 1},
		{3, 8, 6, 1, 3},
		{-4, -1, 1, 7, -6},
		{0, -4, 10, -5, 1}};

	rotateBy90(mat);

	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}