class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        int ans=0;
        
//         for(auto a1 : arr1) {
//             bool flag=false;
//             for(auto a2 : arr2) {
//                 if(abs(a2-a1) <= d) {
//                     flag = true;
//                     break;
//                 }
//             }
            
//             if(!flag) ans++;
//         }
        
        set<int> s;
        for(auto a2:arr2) s.insert(a2);

        for(auto a1 : arr1) {
            if(s.lower_bound(a1-d) == s.upper_bound(a1+d)) {
                ans++;
            }
        }
        return ans;
    }
};