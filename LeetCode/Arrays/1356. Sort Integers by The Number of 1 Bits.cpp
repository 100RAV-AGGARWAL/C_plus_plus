class Solution {
public:
    static int count1s(int a) {
        int cnt=0;
        while(a) {
            a = a & (a-1);
            cnt++;
        }
        
        return cnt;
    }
    
    static bool sortVec(int a, int b) {
        int c1 = count1s(a);
        int c2 = count1s(b);
        
        if(c1 == c2) return a < b;
        else return c1 < c2;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), sortVec);
        return arr;
    }
};