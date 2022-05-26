class Solution {
public:
    static bool sortCol(vector<int> v1, vector<int> v2) {
        if(v1[1] > v2[1]) {
            return true;
        }
        return false;
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), sortCol);
        int ans=0;
        
        for(auto i : boxTypes) {
            int temp = min(i[0], truckSize);
            ans += (temp*i[1]);
            
            truckSize -= temp;
            if(!truckSize) break;
        }
        
        return ans;
    }
};