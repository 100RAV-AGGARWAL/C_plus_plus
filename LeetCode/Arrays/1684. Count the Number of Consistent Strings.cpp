class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[26] = {0};
        int count=0, flag = 1;
        for(auto i: allowed) {
            arr[i-'a'] = 1;
        }
        
        for(auto i : words) {
            flag = 1;
            
            for(auto j : i) {
                if(arr[j-'a'] == 0) {
                    flag = 0;
                    break;
                }
            }
            
            if(flag) count++;
        }
        
        return count;
    }
};