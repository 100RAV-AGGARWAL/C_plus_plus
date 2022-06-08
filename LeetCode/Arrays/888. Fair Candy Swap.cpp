class Solution {
public:
    static int binarySearch(vector<int> a, int v) {
        int st=0, en=a.size()-1;
        
        while(st<=en) {
            int mid = (st+en)/2;
            
            if(a[mid]==v) {
                return mid;
            } else if(a[mid] > v) {
                en = mid-1;
            } else {
                st = mid+1;
            }
        }
        
        return -1;
    }
    
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int aliceSum=0, bobSum=0;
        
        for(auto i : aliceSizes)
            aliceSum+=i;
        
        for(auto i : bobSizes)
            bobSum+=i;
        
        
        int diff = (bobSum-aliceSum)/2;
        sort(bobSizes.begin(), bobSizes.end());
        
        for(int i=0; i<aliceSizes.size(); i++) {
            int j = binarySearch(bobSizes, aliceSizes[i]+diff);
            
            if(j != -1) {
                return {aliceSizes[i], bobSizes[j]};
            }
        }
        
        return {};
    }
};