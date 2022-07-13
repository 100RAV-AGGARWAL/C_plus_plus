class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        stack<int> st;
        
        for(int i=0; i<s.length(); i++) {
            if(!st.empty() && s[i] == s[st.top()]) {
                s[i] = '$';
                s[st.top()] = '$';
                st.pop();
            } else 
                st.push(i);
        }
        
        for(char i : s) {
            if(i != '$')
                ans += i;
        }
        return ans;
    }
};