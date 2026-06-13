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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(!p || !q)return p==q;
        bool r,l;
        
        r=isSameTree(p->right,q->right);
        l=isSameTree(p->left,q->left);

        return (p->val==q->val && r && l);
        
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)return false;
        if(subRoot==NULL)return true;
        if(isSameTree(root,subRoot)){
            return true;
        }
        bool r=isSubtree(root->right,subRoot);
        bool l=isSubtree(root->left,subRoot);
        return r||l;
    }
};
