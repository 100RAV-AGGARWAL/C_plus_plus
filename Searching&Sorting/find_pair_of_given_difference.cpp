#include <bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int size, int n);

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int l, n;
		cin >> l >> n;
		int arr[l];
		for (int i = 0; i < l; i++)
			cin >> arr[i];
		if (findPair(arr, l, n))
			cout << 1 << endl;
		else
			cout << "-1" << endl;
	}

	return 0;
}

bool binarySearch(int arr[], int n, int x)
{
	int min = 0, max = n - 1, mid = min + (max - min) / 2;

	while (min <= max)
	{
		if (arr[mid] == x)
			return true;
		else if (arr[mid] < x)
		{
			min = mid + 1;
		}
		else
		{
			max = mid - 1;
		}
		mid = min + (max - min) / 2;
	}

	if (arr[mid] == x)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool findPair(int arr[], int size, int n)
{
	sort(arr, arr + size);

	for (int i = 0; i < size; i++)
	{
		if (binarySearch(arr, size, abs(arr[i] - n)) == true)
			return true;
	}

	return false;
}