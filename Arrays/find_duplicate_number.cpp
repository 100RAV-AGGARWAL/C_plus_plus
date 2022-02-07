#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        bool flag[len];
        
        for(int i=0; i<len; i++) {
            flag[i] = false;
        }

		for(int i=0; i<len; i++) {
			if(flag[nums[i]] == true) {
				return nums[i];
			} else {
				flag[nums[i]] = true;
			}
		}
    }
};

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        vector<int> a;
        
        for(int i=0;i<n;i++) {
			int temp;
			cin>>temp;
			a.push_back(temp);
		}

        Solution ob;
        
        cout << ob.findDuplicate(a) << endl;
    }
}
