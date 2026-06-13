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
    bool Vali(TreeNode* root, int maxval,int minval){
        if(root==NULL)return true;
        if(root->val>=maxval || root->val<=minval)return false;
        bool left=Vali(root->left,root->val,minval);
        bool right=Vali(root->right,maxval,root->val);
        return left&&right;
    }
    bool isValidBST(TreeNode* root) {
       return Vali(root, INT_MAX, INT_MIN);
    }
};
