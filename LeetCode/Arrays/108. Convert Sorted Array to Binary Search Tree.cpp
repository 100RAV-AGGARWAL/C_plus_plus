/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 1) {
            TreeNode* k = new TreeNode(nums[0]);
            return k;
        }
        
        if(nums.size() == 0) {
            return NULL;
        }
        
        int n = nums.size();
        int mid = n/2;
        
        vector<int> l(nums.begin(), nums.begin()+mid);
        vector<int> r(nums.begin()+mid+1, nums.end());
        
        TreeNode* left = sortedArrayToBST(l);
        TreeNode* right = sortedArrayToBST(r);
        
        return new TreeNode(nums[mid], left, right);
    }
};