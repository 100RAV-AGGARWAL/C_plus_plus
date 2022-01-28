#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int binarySearch(vector<int> &arr, int target, int s, int e)
	{
		int start = s, end = e;
		while (start <= end)
		{
			int mid = (start + end) / 2;

			if (target == arr[mid])
				return mid;
			else if (target > arr[mid])
			{
				start = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
		}
		return -1;
	}

	int search(vector<int> &nums, int target)
	{
		int k=0;
		int len = nums.size();

		if(target == nums[0]) return 0;

		if(target == nums[len-1]) return len-1;

		for(int i=0; i<len-1; i++) {
			if(nums[i] > nums[i+1]) {
				k = i;

				if(target > nums[i] || target < nums[i+1]) return -1;

				if(target == nums[i]) return i;

				if(target == nums[i+1]) return i+1;

				if(target >= nums[i+1] && target <= nums[len-1]) {
					return binarySearch(nums, target, i+1, len-1);
				}
			} else if(nums[i] == target) {
				return i;
			}
		}
		return -1;
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int r;
		cin >> r;
		vector<int> v;
		for (int i = 0; i < r; ++i) {
			int temp;
			cin>>temp;
			v.push_back(temp);
		}
		int target;
		cin >> target;
		Solution obj;
		cout << obj.search(v, target) << endl;
	}
	return 0;
}