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
    int sol(TreeNode* root, int &s)
    {
        if(root==nullptr)
            return 0;
         int l=sol(root->left,s);
         int r=sol(root->right,s);
         int temp=max(root->val+max(l,r),root->val);
         int y=max(temp,root->val+l+r);
         s=max(s,y);
        return temp;
    }
public:
    int maxPathSum(TreeNode* root) {
        int s=INT_MIN;
        sol(root,s);
      
        return s;
        
    }
};